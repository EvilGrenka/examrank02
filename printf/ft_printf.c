#include "ft_printf.h"
#include <stdio.h>

int ft_isdigit(int c)
{
    return (c>=48 && c<=57);
}

static long ft_abs(long num)
{
    if (num < 0)
        return -num;
    return num;
}

static int get_len(long num)
{
    int len=0;
    if(num <= 0)
        len++;
    while (num)
    {
        len++;
        num = num / 10;
    }
    return len;
} 

char *ft_itoa(long num)
{
    char * result; 
    int len;

    len = get_len (num);
    
   
    result = (char*) malloc(sizeof (char ) * len +1);
    result [len] = '\0';
    if (num < 0)
        result[0] = '-';
    else if(!num)
        result[0] = '0';

        
    while (num)
    {
        result[--len] = ft_abs(num % 10) + '0';
        num = num /10;
    }
    
    return result;
}

void ft_putchar(char c)
{
    write(0, &c, 1);
}

char *ft_strdup(char *str)
{
    char * result;
    int i =0;

    if(!str)
        return (NULL);

    result = (char*) malloc (sizeof(char) * str_len(str) + 1);
    if (!result)
        return NULL;
    while (str[i])
    {
        result[i] = str[i];
        i++;
    }
    result [i] = '\0';
    
    return result;
}

size_t str_len(char * str)
{
    size_t len = 0;

    
    while (*str)
        {
            len ++;
            str++;
        }
    return (len);
}

t_format_arg init_format_arg(char c , long num)
{
    t_format_arg format_arg;
    format_arg.width = num;
    format_arg.precision = num;
    format_arg.spec_type = c;
    format_arg.field = num;
    format_arg.show = num;

    return (format_arg);
}

long get_field (const char ** format)
{
    long field = 0;

    while (ft_isdigit (**format))
    {
        field = field * 10 + **format - '0';
        (*format)++;
    } 
    
    return field;
}

long get_precision (const char ** format)
{
    
    long precision = 0;
    if (**format == '.')
    {
        (*format)++;
        while (ft_isdigit (**format))
        {
            precision = precision * 10 + **format - '0';
            (*format) ++ ;
        }
        return precision;
    }
    
    return (-1);
}

int is_spec_type(char c)
{
    return (c == 'd' || c == 's' || c == 'x' || c == '%');
}

char * conver_d (va_list *ap)
{
    char *result;
    long long num;

    num = va_arg(*ap, int);
    
    result = ft_itoa(num);
    
    return result;
}

char * convert (size_t num, char * set)
{
    size_t temp_num = num;
    int len_num = 1;
    char * result;

    while (temp_num/16)
        {
            len_num++;
            temp_num = temp_num / 16;
        }
    result = (char * ) malloc (sizeof (char) * len_num + 1);
    if (!result)
        return NULL;
    result [len_num--] = '\0';
    if(!num)
        result[0] = '0';
    while(num)
    {
        result[len_num--] = set[num % 16];
        num = num / 16;
    } 
    return (result);
}

char * convert_x (va_list * ap)
{
    char * result;
    size_t num;

    num = va_arg(*ap, unsigned int);
    result = convert(num , "0123456789abcdef");
    return result;
}



long ft_max (long a, long b)
{
    if (a > b)
        return a;
    return b;
}

long ft_min(long a, long b)
{
    if (a < b)
        return a;
    return b;
}

int ft_printf(const char * format, ...)
{
    va_list ap;
    int writen_simbols =0;

    va_start(ap, format);
    while (*format)
    {
        if(*format == '%')
            {
                format++;
                writen_simbols += parse(&ap, &format);
            }
        else
        {
            ft_putchar(*format);
            format++;
            writen_simbols++;
        }
    }
    va_end(ap);
    
    return (writen_simbols); 
}

int parse(va_list * ap, const char ** format)
{
    t_format_arg format_arg;
    format_arg = init_format_arg(0,0);
    format_arg.field = get_field(format);
    format_arg.precision = get_precision(format);
    format_arg.spec_type = **format;

    if (is_spec_type(**format))
        (*format) ++;
    return save (ap , format_arg);
}

int save (va_list * ap, t_format_arg format_arg)
{
    char* save;
    
    if (format_arg.spec_type == 'd')
        save = conver_d (ap );
    else if (format_arg.spec_type == 's')
        save = ft_strdup((char*) va_arg(*ap, char*));
    else if (format_arg.spec_type == 'x')
        save = convert_x(ap);
    else if (format_arg.spec_type == '%')
        save = ft_strdup("%");
    else
        return 0;
    if(!save)
        save = ft_strdup("(null)");
        
    return save_putout(save , format_arg);
        
}

int save_putout(char * save , t_format_arg format_arg)
{
    format_arg.width = str_len(save);
    
    if(is_spec_type(format_arg.spec_type) && format_arg.precision == -1)
        format_arg.show = format_arg.width;
    else if (is_spec_type(format_arg.spec_type) && !format_arg.precision)
    {
        if(*save == '0' || format_arg.spec_type == 's')
            format_arg.show = 0;
        else
            format_arg.show = format_arg.width;
    }
    else
    {
        if (format_arg.spec_type == 's')
            format_arg.show = ft_min(format_arg.width, format_arg.precision);
        else
            format_arg.show = format_arg.width;
    }
        if(format_arg.precision > format_arg.field && format_arg.width && format_arg.spec_type != 's')
            format_arg.field = ft_max(format_arg.precision, format_arg.show);
        else
            format_arg.field = ft_max(format_arg.field, format_arg.show);

    putout(save, format_arg);
    return format_arg.field;
}

void putout(char * save, t_format_arg format_arg)
{
    
    if(format_arg.precision > format_arg.show && format_arg.spec_type != 's')
    {
        while (format_arg.field > format_arg.precision)
	    {
		    ft_putchar(' ');
		    format_arg.field--;
	    }
        if(format_arg.width )
            while (format_arg.precision > format_arg.show)
	        {
		        ft_putchar('0');
		        format_arg.precision--;
	        }
    }
    else 
         while (format_arg.field > format_arg.show)
	    {
		    ft_putchar(' ');
		    format_arg.field--;
	    }
	
	while (format_arg.show--)
		ft_putchar(*save++);
}



int main () 
{
    
    puts("");
    printf(" - [%d]\n", ft_printf("Simple test"));
    printf (" - [%d]\n", printf("Simple test"));
    
    puts("");
    printf(" - [%d]\n", ft_printf(""));
    printf(" - [%d]\n", printf(""));

    puts("");
    printf(" - [%d]\n", ft_printf("--Format---"));
    printf(" - [%d]\n", printf("--Format---"));


    puts("");
    printf(" - [%d]\n", ft_printf("%d", 0));
    printf(" - [%d]\n", printf("%d", 0));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", 42));
    printf(" - [%d]\n", printf("%d", 42));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", 1));
    printf(" - [%d]\n", printf("%d", 1));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", 5454));
    printf(" - [%d]\n", printf("%d", 5454));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", (int)2147483647));
    printf(" - [%d]\n", printf("%d", (int)2147483647));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", (int)2147483648));
    printf(" - [%d]\n", printf("%d", (int)2147483648));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", (int)-2147483648));
    printf(" - [%d]\n", printf("%d", (int)-2147483648));

    puts("");
    printf(" - [%d]\n", ft_printf("%d", (int)-2147483649));
    printf(" - [%d]\n", printf("%d", (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", 0));
    printf(" - [%d]\n", printf("%x", 0));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", 42));
    printf(" - [%d]\n", printf("%x", 42));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", 1));
    printf(" - [%d]\n", printf("%x", 1));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", 5454));
    printf(" - [%d]\n", printf("%x", 5454));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", 5454));
    printf(" - [%d]\n", printf("%x", 5454));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", (int)2147483647));
    printf(" - [%d]\n", printf("%x", (int)2147483647));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", (int)2147483648));
    printf(" - [%d]\n", printf("%x", (int)2147483648));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", (int)-2147483648));
    printf(" - [%d]\n", printf("%x", (int)-2147483648));

    puts("");
    printf(" - [%d]\n", ft_printf("%x", (int)-2147483649));
    printf(" - [%d]\n", printf("%x", (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("%s", ""));
    printf(" - [%d]\n", printf("%s", ""));

    puts("");
    printf(" - [%d]\n", ft_printf("%s", "toto"));
    printf(" - [%d]\n", printf("%s", "toto"));

    puts("");
    printf(" - [%d]\n", ft_printf("%s", "wiurwuyrhwrywuier"));
    printf(" - [%d]\n", printf("%s", "wiurwuyrhwrywuier"));

    puts("");
    printf(" - [%d]\n", ft_printf("%s", NULL));
    printf(" - [%d]\n", printf("%s", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("-%s-%s-%s-%s-", "", "toto", "wiurwuyrhwrywuier", NULL));
    printf(" - [%d]\n", printf("-%s-%s-%s-%s-", "", "toto", "wiurwuyrhwrywuier", NULL));


    puts("");
    printf(" - [%d]\n", ft_printf("%d%x%d%x%d%x%d%x", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));
    printf(" - [%d]\n", printf("%d%x%d%x%d%x%d%x", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));

    puts("");
    printf(" - [%d]\n", ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));
    printf(" - [%d]\n", printf("-%d-%x-%d-%x-%d-%x-%d-%x-", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));
    
    puts("");
    printf(" - [%d]\n", ft_printf("%s%s%s%s", "", "toto", "wiurwuyrhwrywuier", NULL));
    printf(" - [%d]\n", printf("%s%s%s%s", "", "toto", "wiurwuyrhwrywuier", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("-%s-%s-%s-%s-", "", "toto", "wiurwuyrhwrywuier", NULL));
    printf(" - [%d]\n", printf("-%s-%s-%s-%s-", "", "toto", "wiurwuyrhwrywuier", NULL));


    puts("");
    printf(" - [%d]\n", ft_printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));


    puts("");
    printf(" - [%d]\n", ft_printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    
    puts("");
    printf(" - [%d]\n", ft_printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

      
    puts("");
    printf(" - [%d]\n", ft_printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    
    puts("");
    printf(" - [%d]\n", ft_printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    
    
    puts("");
    printf(" - [%d]\n", ft_printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));


    puts("");
    printf(" - [%d]\n", ft_printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));


    puts("");
    printf(" - [%d]\n", ft_printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));


    puts("");
    printf(" - [%d]\n", ft_printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    

    puts("");
    printf(" - [%d]\n", ft_printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    

    puts("");
    printf(" - [%d]\n", ft_printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649
));
    printf(" - [%d]\n", printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649
));
    
    puts("");
    printf(" - [%d]\n", ft_printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    

    puts("");
    printf(" - [%d]\n", ft_printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));


    puts("");
    printf(" - [%d]\n", ft_printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    
    puts("");
    printf(" - [%d]\n", ft_printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
    printf(" - [%d]\n", printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));

    puts("");
    printf(" - [%d]\n", ft_printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));

    puts("");
    printf(" - [%d]\n", ft_printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
    printf(" - [%d]\n", printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));


    char *str = NULL;
	printf("\n\nTEST %%s\n\n");
	printf("\n___TEST %%s___\n");
	printf("No original - %d\n", ft_printf("|%s|\n", str));
	printf("Original - %d\n", printf("|%s|\n", str));

	printf("\n___TEST %%ss___\n");
	printf("No original - %d\n", ft_printf("|%ss|\n", str));
	printf("Original - %d\n", printf("|%ss|\n", str));

	printf("\n___TEST %%20s___\n");
	printf("No original - %d\n", ft_printf("|%20s|\n", str));
	printf("Original - %d\n", printf("|%20s|\n", str));

	printf("\n___TEST %%2s___\n");
	printf("No original - %d\n", ft_printf("|%2s|\n", str));
	printf("Original - %d\n", printf("|%2s|\n", str));

	printf("\n___TEST %%.2s___\n");
	printf("No original - %d\n", ft_printf("|%.2s|\n", str));
	printf("Original - %d\n", printf("|%.2s|\n", str));

	printf("\n___TEST %%.20s___\n");
	printf("No original - %d\n", ft_printf("|%.20s|\n", str));
	printf("Original - %d\n", printf("|%.20s|\n", str));

	printf("\n___TEST %%2.20s___\n");
	printf("No original - %d\n", ft_printf("|%2.20s|\n", str));
	printf("Original - %d\n", printf("|%2.20s|\n", str));

	printf("\n___TEST %%22.20s___\n");
	printf("No original - %d\n", ft_printf("|%22.20s|\n", str));
	printf("Original - %d\n", printf("|%22.20s|\n", str));

	printf("\n___TEST %%12.20s___\n");
	printf("No original - %d\n", ft_printf("|%12.20s|\n", str));
	printf("Original - %d\n", printf("|%12.20s|\n", str));

	printf("\n___TEST %%12.s___\n");
	printf("No original - %d\n", ft_printf("|%12.s|\n", str));
	printf("Original - %d\n", printf("|%12.s|\n", str));

	printf("\n___TEST %%.s___\n");
	printf("No original - %d\n", ft_printf("|%.s|\n", str));
	printf("Original - %d\n", printf("|%.s|\n", str));

	printf("\n___TEST %%20.s___\n");
	printf("No original - %d\n", ft_printf("|%20.s|\n", str));
	printf("Original - %d\n", printf("|%20.s|\n", str));

	printf("\n___TEST %%2.s___\n");
	printf("No original - %d\n", ft_printf("|%2.s|\n", str));
	printf("Original - %d\n", printf("|%2.s|\n", str));



	printf("\n\nTEST %%d\n\n");
	int num = 0;
	printf("\n___TEST %%d___\n");
	printf("No original - %d\n", ft_printf("|%d|\n", num));
	printf("Original - %d\n", printf("|%d|\n", num));

	printf("\n___TEST %%dd___\n");
	printf("No original - %d\n", ft_printf("|%dd|\n", num));
	printf("Original - %d\n", printf("|%dd|\n", num));

	printf("\n___TEST %%20d___\n");
	printf("No original - %d\n", ft_printf("|%20d|\n", num));
	printf("Original - %d\n", printf("|%20d|\n", num));

	printf("\n___TEST %%2d___\n");
	printf("No original - %d\n", ft_printf("|%2d|\n", num));
	printf("Original - %d\n", printf("|%2d|\n", num));

	printf("\n___TEST %%.2d___\n");
	printf("No original - %d\n", ft_printf("|%.2d|\n", num));
	printf("Original - %d\n", printf("|%.2d|\n", num));

	printf("\n___TEST %%.20d___\n");
	printf("No original - %d\n", ft_printf("|%.20d|\n", num));
	printf("Original - %d\n", printf("|%.20d|\n", num));

	printf("\n___TEST %%2.20s___\n");
	printf("No original - %d\n", ft_printf("|%2.20d|\n", num));
	printf("Original - %d\n", printf("|%2.20d|\n", num));

	printf("\n___TEST %%22.20d___\n");
	printf("No original - %d\n", ft_printf("|%22.20d|\n", num));
	printf("Original - %d\n", printf("|%22.20d|\n", num));

	printf("\n___TEST %%12.20d___\n");
	printf("No original - %d\n", ft_printf("|%12.20d|\n", num));
	printf("Original - %d\n", printf("|%12.20d|\n", num));

	printf("\n___TEST %%12.d___\n");
	printf("No original - %d\n", ft_printf("|%12.d|\n", num));
	printf("Original - %d\n", printf("|%12.d|\n", num));

	printf("\n___TEST %%.d___\n");
	printf("No original - %d\n", ft_printf("|%.d|\n", num));
	printf("Original - %d\n", printf("|%.d|\n", num));

	printf("\n___TEST %%20.d___\n");
	printf("No original - %d\n", ft_printf("|%20.d|\n", num));
	printf("Original - %d\n", printf("|%20.d|\n", num));

	printf("\n___TEST %%2.d___\n");
	printf("No original - %d\n", ft_printf("|%2.d|\n", num));
	printf("Original - %d\n", printf("|%2.d|\n", num));

	printf("\n\nTEST %%x\n\n");
	unsigned int un = 0;
	printf("\n___TEST %%x___\n");
	printf("No original - %d\n", ft_printf("|%x|\n", un));
	printf("Original - %d\n", printf("|%x|\n", un));

	printf("\n___TEST %%xx___\n");
	printf("No original - %d\n", ft_printf("|%xx|\n", un));
	printf("Original - %d\n", printf("|%xx|\n", un));

	printf("\n___TEST %%20x___\n");
	printf("No original - %d\n", ft_printf("|%20x|\n", un));
	printf("Original - %d\n", printf("|%20x|\n", un));

	printf("\n___TEST %%2x___\n");
	printf("No original - %d\n", ft_printf("|%2x|\n", un));
	printf("Original - %d\n", printf("|%2x|\n", un));

	printf("\n___TEST %%.2x___\n");
	printf("No original - %d\n", ft_printf("|%.2x|\n", un));
	printf("Original - %d\n", printf("|%.2x|\n", un));

	printf("\n___TEST %%.20x___\n");
	printf("No original - %d\n", ft_printf("|%.20x|\n", un));
	printf("Original - %d\n", printf("|%.20x|\n", un));

	printf("\n___TEST %%2.20x___\n");
	printf("No original - %d\n", ft_printf("|%2.20x|\n", un));
	printf("Original - %d\n", printf("|%2.20x|\n", un));

	printf("\n___TEST %%22.20x___\n");
	printf("No original - %d\n", ft_printf("|%22.20x|\n", un));
	printf("Original - %d\n", printf("|%22.20x|\n", un));

	printf("\n___TEST %%12.20x___\n");
	printf("No original - %d\n", ft_printf("|%12.20x|\n", un));
	printf("Original - %d\n", printf("|%12.20x|\n", un));

	printf("\n___TEST %%12.x___\n");
	printf("No original - %d\n", ft_printf("|%12.x|\n", un));
	printf("Original - %d\n", printf("|%12.x|\n", un));

	printf("\n___TEST %%.x___\n");
	printf("No original - %d\n", ft_printf("|%.x|\n", un));
	printf("Original - %d\n", printf("|%.x|\n", un));

	printf("\n___TEST %%20.x___\n");
	printf("No original - %d\n", ft_printf("|%20.x|\n", un));
	printf("Original - %d\n", printf("|%20.x|\n", un));

	printf("\n___TEST %%2.x___\n");
	printf("No original - %d\n", ft_printf("|%2.x|\n", un));
	printf("Original - %d\n", printf("|%2.x|\n", un));

    return 0;
}




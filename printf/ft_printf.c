#include "ft_printf.h"

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
    format_arg.minus = num;

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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int ft_isnum( char c)
{
    return (c == 'd' || c == 'x');
}

int is_spec_type(char c)
{
    return (c == 'd' || c == 's' || c == 'x' || c == '%');
}

char * conver_d (va_list *ap, t_format_arg * format_arg)
{
    char *result;
    long long num;

    num = va_arg(*ap, int);

    if(num < 0)
        format_arg->minus = 1;
    
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
        save = conver_d (ap, &format_arg);
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
    if (ft_isnum(format_arg.spec_type) && format_arg.precision == 0 && !ft_strncmp(save, "0\0", 2))
		*save = '\0';
    
    
    format_arg.width = str_len(save);
    
    
    if (format_arg.precision < 0)
        format_arg.show = format_arg.width;
    
    else if (ft_isnum(format_arg.spec_type))
        format_arg.show = ft_max(format_arg.width, format_arg.precision + format_arg.minus);
    
    
    else
    
		format_arg.show = ft_min(format_arg.precision, format_arg.width);

        
    
    format_arg.field = ft_max(format_arg.field, format_arg.show);

    

    putout(save, format_arg);

    return format_arg.field;
}

void putout(char * save, t_format_arg format_arg)
{
    
    while (format_arg.field > format_arg.show)
	{
		ft_putchar(' ');
		format_arg.field--;
	}

    if (ft_isnum(format_arg.spec_type))
    {
        if (format_arg.minus)
	    {
		    ft_putchar(*save++);
		    format_arg.show--;
		    format_arg.field--;
		    format_arg.width--;
	    }
	    
        while (format_arg.show > format_arg.width && format_arg.field)
	    {
		    ft_putchar('0');
		    format_arg.show--;
		    format_arg.field--;
	    }
    }

    while (format_arg.show--)
		ft_putchar(*save++);
	return ;

    
}


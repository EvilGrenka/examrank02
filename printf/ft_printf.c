#include "ft_printf.h"

int	ft_isdigit(int c)
{
	return (!(c < 48 || c > 57));
}

static int     absolute_value(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}
 
static int     get_len(int nbr)
{
    int len = 0;
    if (nbr <= 0)
        ++len;
    while (nbr != 0)
    {
        ++len;
        nbr = nbr / 10;
    }
    return (len);
}
 
char    *ft_itoa(int nbr)
{
    char *result;
    int len;
 
    len = get_len(nbr);
    result = malloc(sizeof(char) * (len + 1));
    result[len] = '\0';
 
    if (nbr < 0)
        result[0] = '-';
    else if (nbr == 0)
        result[0] = '0';
 
    while (nbr != 0)
    {
        --len;
        result[len] = absolute_value(nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return (result);
}

void	ft_putchar(char c)
{
	write(0, &c, 1);
}

char	*ft_strdup(const char *s1)
{
	char	*str_heap;
	size_t	i;

	if (!s1)
		return (NULL);
	str_heap = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (str_heap)
	{
		i = 0;
		while (s1[i])
		{
			str_heap[i] = s1[i];
			i++;
		}
		str_heap[i] = '\0';
	}
	return (str_heap);
}

size_t	ft_strlen(const char *s)
{
	size_t	str_len;

	str_len = 0;
	while (*s++)
		str_len++;
	return (str_len);
}

int	ft_is_spec_type(char spec_type)
{
	return (spec_type == 's'
		|| spec_type == 'd'
		|| spec_type == 'x'
		|| spec_type == '%'
	);
}

char	*ft_convert_d(va_list *ap, t_format_arg *format_arg)
{
	char		*save;
	long long	result_num;

	result_num = va_arg(*ap, int);
	save = ft_itoa(result_num);
	if (*save == '-')
		format_arg->minus = 1;
	return (save);
}

char	*ft_convert(size_t num, const char *set, int base)
{
	char	*result;
	int		len_num;
	size_t	tmp;

	tmp = num;
	len_num = 1;
	tmp /= base;
	while (tmp)
	{
		len_num++;
		tmp /= base;
	}
	result = (char *)malloc(sizeof(char) * len_num + 1);
	if (!result)
		return (NULL);
	result[len_num] = '\0';
	result[--len_num] = set[num % base];
	num /= base;
	while (num)
	{
		result[--len_num] = set[num % base];
		num /= base;
	}
	return (result);
}

char	*ft_convert_x(va_list *ap, t_format_arg format_arg)
{
	char	*save;
	size_t	result_num;
	result_num = va_arg(*ap, unsigned int);
	save = ft_convert(result_num, "0123456789abcdef", 16);
	return (save);
}

t_format_arg	ft_init_format_arg(char character, long num)
{
	t_format_arg	format_arg;

	format_arg.width = num;
	format_arg.precision = num;
	format_arg.spec_type = character;
	format_arg.field = num;
	format_arg.show = num;
	format_arg.minus = num;
	return (format_arg);
}


t_format_arg	ft_get_field(const char **format, va_list *ap, t_format_arg format_arg)
{
	long	field;

	field = 0;
	
	while (ft_isdigit(**format))
	{
			field = field * 10 + **format - '0';
			(*format)++;
	}
	format_arg.field = field;
	
	return (format_arg);
}

long	ft_get_precision(const char **format, va_list *ap)
{
	long	precision;

	precision = 0;
	if (**format == '.')
	{
		(*format)++;
		while (ft_isdigit(**format))
		{
			precision = precision * 10 + (**format - '0');
			(*format)++;
		}
	}
	return (precision);
}

void	ft_putout(char *save, t_format_arg format_arg)
{
	
	while (format_arg.field > format_arg.show)
	{
		ft_putchar(' ');
		format_arg.field--;
	}
	if (format_arg.minus)
	{
		ft_putchar(*save++);
		format_arg.field--;
		format_arg.width--;
		format_arg.show--;
	}
	while (format_arg.show--)
		ft_putchar(*save++);
	return ;
}

long	ft_max (long a, long b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

long	ft_min(long a, long b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	writen_characters;

	writen_characters = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			writen_characters += ft_parse(&format, &ap);
		}
		else
		{
			ft_putchar(*format++);
			writen_characters++;
		}
	}
	va_end(ap);
	return (writen_characters);
}

int	ft_parse(const char **format, va_list *ap)
{
	t_format_arg	format_arg;

	format_arg = ft_init_format_arg(0, 0);
	format_arg = ft_get_field(format, ap, format_arg);
	format_arg.precision = ft_get_precision(format, ap);
	format_arg.spec_type = **format;

	if (ft_is_spec_type(**format))
		(*format)++;
	
	return (ft_save(ap, format_arg));
}

int	ft_save(va_list *ap, t_format_arg format_arg)
{
	char	*save;
	
	if (format_arg.spec_type == 's')
		save = ft_strdup((char *)va_arg(*ap, char *));
	else if (format_arg.spec_type == 'd')
		save = ft_convert_d(ap, &format_arg);
	else if (format_arg.spec_type == 'x')
		save = ft_convert_x(ap, format_arg);
	else if (format_arg.spec_type == '%')
		save = ft_strdup("%");
	else
		return (0);
	if (!save)
		save = ft_strdup("(null)");
	return (ft_save_putout(format_arg, save));
}

int	ft_save_putout(t_format_arg format_arg, char *save)
{	
	format_arg.width = ft_strlen(save);
	
	if ((format_arg.spec_type == 'd' || format_arg.spec_type == 's' || format_arg.spec_type == 'x') && !format_arg.precision)
		format_arg.show = format_arg.width;
	else
		format_arg.show = ft_min(format_arg.precision, format_arg.width);

	format_arg.field = ft_max(format_arg.field, format_arg.show);
	
	ft_putout(save, format_arg);
	
	return (format_arg.field);
}

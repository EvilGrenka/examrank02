#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct s_format_arg
{
	long	width;
	long	precision;
	char	spec_type;
	int		minus;
	long	field;
	long	show;
}				t_format_arg;

//прототипы вспомогательных функции из libft
int		ft_isdigit(int c);
char    *ft_itoa(int nbr);
void	ft_putchar(char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);


//прототипы функций самой printf
int				ft_is_spec_type(char spec_type);
char			*ft_convert_d(va_list *ap, t_format_arg *format_arg);
char			*ft_convert(size_t num, const char *set, int base);
char			*ft_convert_x(va_list *ap, t_format_arg format_arg);

t_format_arg	ft_init_format_arg(char character, long num);
t_format_arg	ft_get_field(const char **format, va_list *ap, t_format_arg format_arg);
long			ft_get_precision(const char **format, va_list *ap);

void			ft_putout(char *save, t_format_arg format_arg);
long			ft_max(long a, long b);
long			ft_min(long a, long b);

int				ft_printf(const char *format, ...);
int				ft_parse(const char **format, va_list *ap);
int				ft_save(va_list *ap, t_format_arg format_arg);
int				ft_save_putout(t_format_arg f_arg, char *save);

#endif

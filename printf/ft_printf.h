#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_format_arg
{
    long width;
    long precision;
    char spec_type;
    long field;
    long show;

} t_format_arg;


int ft_isdigit(int c);
char *ft_itoa(long num);
void ft_putchar(char c);
char *ft_strdup(char *str);
size_t str_len(char * str);

t_format_arg init_format_arg(char c , long num);
long get_field (const char ** format);
long get_precision (const char ** format); 

int is_spec_type(char c);
char * conver_d (va_list *ap);
char * convert_x (va_list * ap);
char * convert (size_t num, char * set);

long ft_max (long a, long b);
long ft_min(long a, long b);

int ft_printf(const char * format, ...);
int parse(va_list * ap, const char ** format);
int save (va_list * ap, t_format_arg format_arg);
int save_putout(char * save , t_format_arg format_arg);

void putout(char * save, t_format_arg format_arg);
#endif
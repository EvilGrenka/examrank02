#include <stdio.h>
#include <limits.h>
int ft_printf(const char * format, ...);
int main () 
 {
    int i;

    
    ft_printf("");
	ft_printf("--Format---");
    puts("");
	ft_printf("\n");
    printf("\n");
	puts("");
    ft_printf("%d\n", 0);
    printf("%d\n", 0);
	puts("");
    ft_printf("%d\n", 42);
    printf("%d\n", 42);
	puts("");
    ft_printf("%d\n", 1);
    printf("%d\n", 1);
	puts("");
    ft_printf("%d\n", 5454);
    printf("%d\n", 5454);
	puts("");
    ft_printf("%d\n", (int)2147483647);
    printf("%d\n", (int)2147483647);
	puts("");
    ft_printf("%d\n", (int)2147483648);
    printf("%d\n", (int)2147483648);
	puts("");
    ft_printf("%d\n", (int)-2147483648);
    printf("%d\n", (int)-2147483648);
	puts("");
    ft_printf("%d\n", (int)-2147483649);
    printf("%d\n", (int)-2147483649);
	puts("");
    ft_printf("\n");
    printf("\n");
	puts("");
    ft_printf("%x\n", 0);
    printf("%x\n", 0);
    puts("");
	ft_printf("%x\n", 42);
    printf("%x\n", 42);
	puts("");
    ft_printf("%x\n", 1);
    printf("%x\n", 1);
	puts("");
    ft_printf("%x\n", 5454);
    printf("%x\n", 5454);
	puts("");
    ft_printf("%x\n", (int)2147483647);
    printf("%x\n", (int)2147483647);
	puts("");
    ft_printf("%x\n", (int)2147483648);
    printf("%x\n", (int)2147483648);
	puts("");
    ft_printf("%x\n", (int)-2147483648);
    printf("%x\n", (int)-2147483648);
	puts("");
    ft_printf("%x\n", (int)-2147483649);
    printf("%x\n", (int)-2147483649);
	puts("");
    ft_printf("%s\n", "");
    printf("%s\n", "");
	puts("");
    ft_printf("%s\n", "toto");
    printf("%s\n", "toto");
	puts("");
    ft_printf("%s\n", "wiurwuyrhwrywuier");
    printf("%s\n", "wiurwuyrhwrywuier");
	puts("");
    ft_printf("%s\n", NULL);
    printf("%s\n", NULL);
	puts("");
    ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
    printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	puts("");
    ft_printf("\n--Mixed---\n");
	puts("");
    ft_printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
    printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	puts("");
    ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
    printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	puts("");
    ft_printf("\n");
	ft_printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);
    ft_printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	puts("");
    ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
    printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
    puts("");
	ft_printf("--1 ft_printflag--\n");
	ft_printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    puts("");
	ft_printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    puts("");
	ft_printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");

	ft_printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("--2 ft_printflags--\n");
	ft_printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("--Precision--\n");
	ft_printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("--Width--\n");
	ft_printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("--Width and Precision--\n");
	ft_printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
    printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649);
puts("");
	ft_printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
puts("");
	ft_printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);
    printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL);

	
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
    printf(" - [%d]\n", ft_printf("%s", ""));
    printf(" - [%d]\n", printf("%s", ""));

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

    /**		BAdIC testd (NO-FLAGd)		**/
	i = ft_printf("%d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%d\n", 0);
	printf("ret : %d\n", i);
	
    i = ft_printf("%d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%d\n", -2147483648);
	printf("ret : %d\n", i);
	
    i = ft_printf("ceci edt un %d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	
    i = ft_printf("%d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%d\n", 2147483647);
	printf("ret : %d\n", i);
	
    i = ft_printf("ceci edt un %d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	// /**		ONLY_PADDING				**/
	i = ft_printf("%10d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%10d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%0d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%0d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%10d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%10d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%0d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%0d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%10d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%10d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%0d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%0d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("ceci edt un %10d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %10d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("ceci edt un %0d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %0d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("ceci edt un %10d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %10d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("ceci edt un %0d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("ceci edt un %0d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	// /**		PADDING + PRECIdION			**/
	i = ft_printf("%50.30d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%50.30d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%8.30d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%8.30d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%8.2d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%8.2d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%3.2d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%3.2d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%2.3d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%2.3d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%0.30d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%0.30d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%0.0d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%0.0d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%50.0d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%.30d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%.30d\n", 0);
	printf("ret : %d\n", i);

	i = ft_printf("%50.0d\n", 0);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", 0);
	printf("ret : %d\n", i);


	i = ft_printf("%50.30d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%50.30d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%8.30d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%8.30d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%8.2d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%8.2d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%3.2d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%3.2d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%2.3d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%2.3d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%0.30d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%0.30d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%0.0d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%0.0d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%.20d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%.20d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);

	i = ft_printf("%50.30d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%50.30d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%8.30d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%8.30d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%8.2d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%8.2d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%3.2d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%3.2d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%2.3d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%2.3d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%0.30d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%0.30d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%0.0d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%0.0d\n", 2147483647);
	printf("ret : %d\n", i);

    i = ft_printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%.30d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%.30d\n", 2147483647);
	printf("ret : %d\n", i);

	i = ft_printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);
    i = printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);


	
	
	


  printf(" %d\n",ft_printf("Simple test"));
	printf(" %d\n",ft_printf(""));
	printf(" %d\n",ft_printf("--Format---"));
	printf(" %d\n",ft_printf("|line%d|",__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", (int)NULL,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", 0,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", 42,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", 1,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", 5454,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", INT_MAX,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", INT_MIN,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", (int)2147483647,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", (int)2147483648,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", (int)-2147483648,__LINE__));
	printf(" %d\n",ft_printf("%d|line%d|", (int)-2147483649,__LINE__));

    puts("");

    printf(" %d\n",printf("Simple test"));
	printf(" %d\n",printf(""));
	printf(" %d\n",printf("--Format---"));
	printf(" %d\n",printf("|line%d|",__LINE__));
	printf(" %d\n",printf("%d|line%d|", (int)NULL,__LINE__));
	printf(" %d\n",printf("%d|line%d|", 0,__LINE__));
	printf(" %d\n",printf("%d|line%d|", 42,__LINE__));
	printf(" %d\n",printf("%d|line%d|", 1,__LINE__));
	printf(" %d\n",printf("%d|line%d|", 5454,__LINE__));
	printf(" %d\n",printf("%d|line%d|", INT_MAX,__LINE__));
	printf(" %d\n",printf("%d|line%d|", INT_MIN,__LINE__));
	printf(" %d\n",printf("%d|line%d|", (int)2147483647,__LINE__));
	printf(" %d\n",printf("%d|line%d|", (int)2147483648,__LINE__));
	printf(" %d\n",printf("%d|line%d|", (int)-2147483648,__LINE__));
	printf(" %d\n",printf("%d|line%d|", (int)-2147483649,__LINE__));


    printf(" %d\n",ft_printf("|line%d|\n",__LINE__));
    printf(" %d\n",printf("|line%d|\n",__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", (unsigned int)NULL,__LINE__));
    printf(" %d\n",printf("%x|line%d|", (unsigned int)NULL,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", 0,__LINE__));
    printf(" %d\n",printf("%x|line%d|", 0,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", 42,__LINE__));
    printf(" %d\n",printf("%x|line%d|", 42,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", 1,__LINE__));
    printf(" %d\n",printf("%x|line%d|", 1,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", 5454,__LINE__));
    printf(" %d\n",printf("%x|line%d|", 5454,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", (int)2147483647,__LINE__));
    printf(" %d\n",printf("%x|line%d|", (int)2147483647,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", (int)2147483648,__LINE__));
    printf(" %d\n",printf("%x|line%d|", (int)2147483648,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", (int)-2147483648,__LINE__));
    printf(" %d\n",printf("%x|line%d|", (int)-2147483648,__LINE__));

	printf(" %d\n",ft_printf("%x|line%d|", (int)-2147483649,__LINE__));
    printf(" %d\n",printf("%x|line%d|", (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("%s|line%d|", "",__LINE__));
    printf(" %d\n",printf("%s|line%d|", "",__LINE__));

	printf(" %d\n",ft_printf("%s|line%d|", "toto",__LINE__));
    printf(" %d\n",printf("%s|line%d|", "toto",__LINE__));

	printf(" %d\n",ft_printf("%s|line%d|", "wiurwuyrhwrywuier",__LINE__));
    printf(" %d\n",printf("%s|line%d|", "wiurwuyrhwrywuier",__LINE__));

	printf(" %d\n",ft_printf("%s|line%d|", NULL,__LINE__));
    printf(" %d\n",printf("%s|line%d|", NULL,__LINE__));

	printf(" %d\n",ft_printf("-%s-%s-%s-%s-|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));
    printf(" %d\n",printf("-%s-%s-%s-%s-|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));

	printf(" %d\n",ft_printf("--Mixed---|line%d|",__LINE__));
    printf(" %d\n",printf("--Mixed---|line%d|",__LINE__));

	printf(" %d\n",ft_printf("%d%x%d%x%d%x%d%x|line%d|", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648,__LINE__));
    printf(" %d\n",printf("%d%x%d%x%d%x%d%x|line%d|", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648,__LINE__));

	printf(" %d\n",ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-|line%d|", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648,__LINE__));
    printf(" %d\n",printf("-%d-%x-%d-%x-%d-%x-%d-%x-|line%d|", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648,__LINE__));

	printf(" %d\n",ft_printf("|line%d|",__LINE__));
    printf(" %d\n",printf("|line%d|",__LINE__));

	printf(" %d\n",ft_printf("%s%s%s%s|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));
    printf(" %d\n",printf("%s%s%s%s|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));

	printf(" %d\n",ft_printf("-%s-%s-%s-%s-|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));
    printf(" %d\n",printf("-%s-%s-%s-%s-|line%d|", "", "toto", "wiurwuyrhwrywuier", NULL,__LINE__));

	printf(" %d\n",ft_printf("--1 Flag--"));
    printf(" %d\n",printf("--1 Flag--"));

	printf(" %d\n",ft_printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0w %0d %0d %0d %0d %0d %0d %0d %0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w %4d %4d %4d %4d %4d %4d %4d %4d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10w %10d %10d %10d %10d %10d %10d %10d %10d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0w %0x %0x %0x %0x %0x %0x %0x %0x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4w %4x %4x %4x %4x %4x %4x %4x %4x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10w %10x %10x %10x %10x %10x %10x %10x %10x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("--2 Flags--"));
    printf(" %d\n",printf("--2 Flags--"));

	printf(" %d\n",ft_printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("--Precision--"));
    printf(" %d\n",printf("--Precision--"));

	printf(" %d\n",ft_printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("--Width--"));
    printf(" %d\n",printf("--Width--"));

	printf(" %d\n",ft_printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d|line%d|", 0, -42, -1, -4554, -2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("--Width and Precision--"));
    printf(" %d\n",printf("--Width and Precision--"));

	printf(" %d\n",ft_printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d|line%d|", 0, -20, -210, -4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d|line%d|", 0, -20, -210, -4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d|line%d|", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d|line%d|", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x|line%d|", 0, -42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x|line%d|", 0, -42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x|line%d|", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x|line%d|", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));
    printf(" %d\n",printf("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x|line%d|", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649,__LINE__));

	printf(" %d\n",ft_printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));
    printf(" %d\n",printf("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`|line%d|", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL,__LINE__));

	printf(" %d\n",ft_printf("jaja [%30.10d]|line%d|", -303030,__LINE__));
    printf(" %d\n",printf("jaja [%30.10d]|line%d|", -303030,__LINE__));

	printf(" %d\n",ft_printf("jaja[%30.10s] [%.3s] [%.30s] [%20s] [%30.10d] [%30d %.10d] [%30.10d] |line%d|", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030,__LINE__));
    printf(" %d\n",printf("jaja[%30.10s] [%.3s] [%.30s] [%20s] [%30.10d] [%30d %.10d] [%30.10d] |line%d|", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030,__LINE__));

	printf(" %d\n",ft_printf("jaja[%30.10s] [%.3s] [%.30s] [%20s] [%30.10d] [%30d %.10d] [%30.10d] [%5.0d] [%30.10x] [%30x] [%.10x] [%30.10x] [%5.0x] |line%d|", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030, 0, 30, 30 , 303030, -303030, 0,__LINE__));
	printf(" %d\n",printf("jaja[%30.10s] [%.3s] [%.30s] [%20s] [%30.10d] [%30d %.10d] [%30.10d] [%5.0d] [%30.10x] [%30x] [%.10x] [%30.10x] [%5.0x] |line%d|", "jaime que", "jaime", "jaime", "jaime", 30, 30 , 303030, -303030, 0, 30, 30 , 303030, -303030, 0,__LINE__));

    printf(" %d\n",ft_printf("[%6d], [%10.3s] |line%d|", (int)-2147483648, "",__LINE__));
    printf(" %d\n",printf("[%6d], [%10.3s] |line%d|", (int)-2147483648, "",__LINE__));


 return 0;
 }
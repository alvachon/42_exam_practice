
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void    ft_putstr(char *str, int *len)
{
    if (!str)
        str = "(null)";
    while (*str)
        *len += write(1, str++, 1);
}

void    ft_putnbr(long long int n, int base, int *len)
{
    char    *hex = "0123456789abcdef";

    if (n < 0)
    {
        n *= -1;
        *len += write(1, "-", 1);
    }
    if (n >= base)
        ft_putnbr((n / base), base, len);
    *len += write(1, &hex[n % base], 1);
}

int ft_printf(const char *format, ...)
{
    int len = 0;
    va_list ptr;
    va_start(ptr, format);
    while (*format)
    {
        if ((*format == '%') && *(format + 1))
        {
            format++;
            if (*format == 's')
                ft_putstr(va_arg(ptr, char *), &len);
            else if (*format == 'd')
                ft_putnbr((long long int)va_arg(ptr, int), 10, &len);
            else if (*format == 'x')
                ft_putnbr((long long int)va_arg(ptr, unsigned int), 16, &len);
        }
        else
            len += write(1, format, 1);
        format++;
    }
    return (va_end(ptr), len);
}

/*int main()
{
    ft_printf("%s in %s is %d and %x in %s\n", "255", "decimal", 255, 255, "hexadecimal");
}*/
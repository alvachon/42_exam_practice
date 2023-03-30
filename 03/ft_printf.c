/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 09:41:31 by alvachon          #+#    #+#             */
/*   Updated: 2023/03/30 11:02:04 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	print_str(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		write(1, &s[0], 1);
		s++;
		i++;
	}
	return (i);
}

int	print_nb(long long int d, int base)
{
	int	 l = 0;
	char *hexa = "0123456789abcdef";

	if (d < 0)
	{
		d *= -1;
		write(1, "-", 1);
		l++;
	}
	if (d >= base)
		l += print_nb(d / base, base);
	write(1, &hexa[d % base], 1);
	l++;
	return (l);
}

int	ft_printf(const char *fmt, ...)
{
	char				*s;
	long long int		d;
	int					l;
	va_list				ap;

	va_start(ap, fmt);
	l = 0;
	while (*fmt)
	{
		if (fmt[0] == '%' && fmt[1] == 's')
		{
			fmt += 2;
			s = va_arg(ap, char *);
			l += print_str(s);
			continue;
		}
		if (fmt[0] == '%' && fmt[1] == 'd')
		{
			fmt += 2;
			d = (long long int)va_arg(ap, int);
			l += print_nb(d, 10);
			continue;
		}
		if (fmt[0] == '%' && fmt[1] == 'x')
		{
			fmt += 2;
			d = (long long int)va_arg(ap, int);
			l += print_nb(d, 16);
			continue;
		}
		else
		{
			write(1, &fmt[0], 1);
			fmt++;
			l++;
		}
	}
	va_end(ap);
	return (l);
}

int	main(void)
{
	/*int l;
	int i;*/

	printf("-------------\n");
	ft_printf("%x\n", (int)2147483648);//
	printf("%x\n", (int)2147483648);//

	/*l = ft_printf("Allo!\n");
	i = printf("Allo!\n");
	printf("%d\n", l);
	printf("%d\n", i);
	ft_printf("%s\n", "Allo !");
	l = ft_printf("%s\n", "");
	i = printf("%s\n", "");
	printf("%d\n", l);
	printf("%d\n", i);
	l = ft_printf("%s\n", NULL);
	i = printf("%s\n", NULL);
	printf("%d\n", l);
	printf("%d\n", i);
	ft_printf("%d\n", 255);
	ft_printf("%x\n", 255);
	printf("-------------\n");
	ft_printf("%s\n", "-n");
	printf("%s\n", "-n");
	printf("-------------\n");
	ft_printf("%d\n", 0);
	printf("%d\n", 0);
		printf("-------------\n");
	ft_printf("%d\n", 54);
	printf("%d\n", 54);
		printf("-------------\n");
	ft_printf("%d\n", 1);
	printf("%d\n", 1);
		printf("-------------\n");
	ft_printf("%d\n", (int)2147483647);
	printf("%d\n", (int)2147483647);
		printf("-------------\n");
	ft_printf("%d\n", (int)2147483648);
	printf("%d\n", (int)2147483648);
		printf("-------------\n");
	ft_printf("%d\n", (int)-2147483648);
	printf("%d\n", (int)-2147483648);
		printf("-------------\n");
	ft_printf("%d\n", (int)-2147483649);
	printf("%d\n", (int)-2147483649);
		printf("-------------\n");
	ft_printf("%x\n", 0);
	printf("%x\n", 0);
		printf("-------------\n");
	ft_printf("%x\n", 54);
	printf("%x\n", 54);
		printf("-------------\n");
	ft_printf("%x\n", 1);
	printf("%x\n", 1);
		printf("-------------\n");
	ft_printf("%x\n", (int)2147483647);
	printf("%x\n", (int)2147483647);
		printf("-------------\n");
	ft_printf("%x\n", (int)-2147483648);
	printf("%x\n", (int)-2147483648);
		printf("-------------\n");
	ft_printf("%x\n", (int)-2147483649);//
	printf("%x\n", (int)-2147483649);//
		printf("-------------\n");
	ft_printf("%x\n", (int)0xFFFFFFFF);
	printf("%x\n", (int)0xFFFFFFFF);
		printf("-------------\n");
	ft_printf("\n");
	printf("\n");
		printf("-------------\n");
	ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
		printf("-------------\n");
	ft_printf("\n--Mixed---\n");
	printf("\n--Mixed---\n");
		printf("-------------\n");
	ft_printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
		printf("-------------\n");
	ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
		printf("-------------\n");
	ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
		printf("-------------\n");
			printf("-------------\n");
	ft_printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);//
	printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	*/
}

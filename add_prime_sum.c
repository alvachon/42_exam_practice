/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:56:39 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/05 13:46:21 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define STR av[1][i]

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_prime(int numb)
{
	if ((numb % 2 == 0 && numb != 2)|| (numb % 3 == 0 && numb != 3))
		return (0);
	return (1);
}
int	ft_atoi(char *str)
{
	int				result;
	int				sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(int ac, char *av[])
{
	int	i = 0;
	int	numb = ft_atoi(av[1]);
	int result = 0;
	if (ac == 2 && numb > 0)
	{
		while (numb > 2)
		{
			if (is_prime(numb))
			{	
				result += numb;
				if (numb > 2)
					numb = numb - 1;
			}
			while (!is_prime(numb) && numb > 2)
			{
				numb = numb - 1;
			}	
		}
		result += numb;
		ft_putnbr(result);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
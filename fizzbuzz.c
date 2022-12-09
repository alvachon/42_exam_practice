/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:57:25 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:35:48 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_putchar >> ft_putnbr recursive (10), main 100 if % 5 == 0 ...
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int	main()
{
	int	loop = 100;
	int	number = 1;
	while (loop != 0)
	{
		if (number % 5 == 0 && number % 3 == 0)
			write(1, "fizzbuzz\n", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0);
			write(1, "buzz", 4);
		else
			ft_putnbr(number);
		loop--;
		number++;
		write(1, "\n", 1);
	}
	return (0);
}
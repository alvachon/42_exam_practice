/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/12/09 13:47:17 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Example, if you pass 2 to print_bits, it will print "00000010"
*/
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	print_bits_bitwise(unsigned char octet)
{
	int	i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int		main(void)
{
	int n = 64;
	print_bits_bitwise(n);
	write(1, "\n", 1);
}

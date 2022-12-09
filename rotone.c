/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 11:44:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(if MAJ || LOW) STR = STR + 1;
*/

#define STR av[1][i]
#define MAJ (STR >= 'A' && STR <= 'Z')
#define LOW (STR >= 'a' && STR <= 'z')

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac > 1)
	{
		while (STR)
		{
			if (MAJ || LOW)
				STR = STR + 1;
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 11:36:59 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
if MAJ; write '_', STR = STR + ' ', write &av.
*/

#define STR av[1][i]

#include <unistd.h>

int	main(int ac, char *av[])
{

	int	i = 0;
	if (ac > 1)
	{
		while (STR)
		{
			if (STR >= 'A' && STR <= 'Z')
			{
				write(1, "_", 1);
				STR = STR + ' ';
				write(1, &av[1][i], 1);
				i++;	
			}
			else if (STR >= 'a' && STR <= 'z')
			{
				write(1, &STR, 1);
				i++;
			}
		}

	}
	write(1, "\n", 1);
	return (0);
}
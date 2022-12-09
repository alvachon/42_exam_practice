/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/01 13:03:38 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
STR = av[1][i] IN = av[2][0] OUT = av[3][0]. ac == 4 && !IN && !OUT
IF STR == IN, STR == OUT write & str; i++;
*/

#define STR av[1][i]
#define IN av[2][0]
#define OUT av[3][0]

#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (av[2][1] || av[3][1])
	{
		write(1, "\n", 1);
		exit(1);
	}
	if (ac == 4)
	{	
		while (STR)
		{
			if (STR == IN && OUT)
				STR = OUT;
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
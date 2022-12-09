/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/01 15:07:31 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define STR av[1][i]

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac > 1)
	{
		while (STR == 32 || STR == 10)
			i++;
		while (STR != 32 && STR != 10 && STR)
		{
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
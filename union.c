/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:55:09 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/01 14:29:55 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//une ref de toute les stringd

#define STR_1 av[1][i]
#define STR_2 av[2][j]

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;
	int j = 0;
	int tab[256] = {0};//mapping ascii table for finding frequency

	if (ac == 3)
	{
		while (STR_1)
		{
			if (tab[(int)STR_1] == 0)
			{
				tab[(int)STR_1] = 1;
				write(1, &STR_1, 1);
			}
			i++;
		}
		while (STR_2)
		{
			if (STR_2 != STR_1)
			{
				if (tab[(int)STR_2] == 0)
				{
					tab[(int)STR_2] = 1;
					write(1, &STR_2, 1);
				}
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
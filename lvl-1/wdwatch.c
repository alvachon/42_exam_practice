/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:32:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/01 14:55:58 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define STR_1 av[1][i]
#define STR_2 av[2][j]

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int j = 0;
	int	i = 0;
	int tab[256] = {0};//mapping ascii table for finding frequency
	int len_s1 = ft_strlen(av[1]);

	if (ac == 3)
	{
		while (STR_2)
		{
			if (STR_2 == STR_1)
			{
				if (tab[(int)STR_1] == 0)
				{
					i++;
				}
			}
			j++;
		}
		if (i < len_s1)
		{
			write(1, "\n", 1);
		}
		else
		{
			i = 0;
			while (STR_1)
			{
				write(1, &STR_1, 1);
				i++;
			}
			write(1, "\n", 1);
		}
	}
	return (0);
}
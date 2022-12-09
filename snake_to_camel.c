/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:32:42 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/29 10:44:16 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define STR av[1][i]

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac > 1)
	{
		while (STR)
		{
			if (STR == '_')
			{
				i++;
				STR = STR - ' ';
			}
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
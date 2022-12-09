/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:53:13 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
if ac > 1 while STR == ' ' || '\n' i++, while "" && STR = write i ++;
*/

#define STR av[1][i]

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac > 1)
	{
		while (STR == ' ' || STR == '\n')
			i++;
		while (STR != ' ' && STR != '\n' && STR)
		{
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
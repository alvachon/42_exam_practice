/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:47:54 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
if ac == 2, i = strlen(av[1]), while i write &av[--i]
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *av[])
{
	int	i = ft_strlen(av[1]);

	if (argc == 2)
	{
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
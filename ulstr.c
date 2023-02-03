/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 11:34:07 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_type(c>='A' && c>='Z') return bool system. main = if type == 1, STR += ' '
else STR -= ' '; write&STR, i ++;
*/

#define STR av[1][i]

#include <unistd.h>

int	ft_type(char c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (3);
}

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac == 2)
	{	
		while (STR)
		{	
			if (ft_type(STR) == 1)
				STR += ' ';
			else if (ft_type(STR) == 2)
				STR -= ' ';
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
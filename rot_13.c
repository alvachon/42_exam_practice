/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:55:42 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:52:58 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
av > 1 while av[1][i] = >= a && <= z // 
av[1][i] = (av[1][i] - 'a' ** reset à partir du début ** + 13 ** bond de 13 **)
% 26 (lettres de l'alph) + 'a' (remise en ordre)
else if ('A')
write &av[1][i]
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
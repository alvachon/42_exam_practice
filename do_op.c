/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 11:50:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ac == 4, n_1=atoi(av[1]), n_2=atoi(av[3]), if av[2][0] == math formula ... 
*/

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	n_1;
	int	n_2;
	int	result = 0;

	if (ac == 4)
	{
		n_1 = atoi(av[1]);
		n_2 =  atoi(av[3]);
		if (av[2][0] == '*')
			result = n_1 * n_2;
		if (av[2][0] == '/')
			result = n_1 / n_2;
		if (av[2][0] == '%')
			result = n_1 % n_2;
		if (av[2][0] == '+')
			result = n_1 + n_2;
		if (av[2][0] == '-')
			result = n_1 - n_2;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
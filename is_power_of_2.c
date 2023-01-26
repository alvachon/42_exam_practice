/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/29 10:03:32 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
** Now the bitwise version :
** we apply n - 1 mask to n, and then check that is equal to 0
** it will be true for all numbers that are power of 2.
** Lastly we make sure that n is superior to 0.
*/

int	is_power_of_2(unsigned int n)
{

	if (n == 0)
		return (0);
	while (n % 2 == 0)//(!(n % 2))
		n /= 2;//n = n / 2;
	return ((n == 1) ? 1 : 0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
        printf("%s is power of 2 ?\n", av[1]);
		is_power_of_2(atoi(av[1])) ? printf("Yes\n") : printf("o\n");
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/07 11:05:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int	biggest = tab[0];
	int	index = 1;
	while (index < len)
	{
		if (biggest < tab[index])
			biggest = tab[index];
		index++;
	}
	return (biggest);
}

int main(void)
{
	int	tab[] = {42, 0, 5, 64, 2, 68, 1};

	printf("max : %d", max(tab, 7));
	return (0);
}
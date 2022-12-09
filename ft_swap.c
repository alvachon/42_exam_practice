/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:01:26 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:40:31 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
temp = *a, *a = *b, *b = temp
*/

#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	ft_swap(&a, &b);
	printf(" new a = 0 (%d) new b = 1 (%d)", a, b);
	return (0);
}
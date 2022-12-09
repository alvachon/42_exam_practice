/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 11:51:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
result = result * 10 +str[i] - '0'; return (sign * result);
*/

#define STR str[i]

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int	i = 0;
	int sign = 1;
	int result = 0;
	while (STR != '\0')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (STR >= '0' && STR <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		else if(!(STR >= '0' && STR <= '9'))
			i++;
	}
	return (sign * result);
}

int main()
{
  char str2[20] = "111";
  char str1[20] = "111";
	int	n_1 = 0;
	int	n_2 = 0;

  	n_1 = ft_atoi(str2);
  	n_2 = atoi(str1);
	printf("%d\n", n_1);
	printf("%d\n", n_2);
	return 0;
}
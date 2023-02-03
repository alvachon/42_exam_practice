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

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main()
{
    printf("ft_atoi: %d\n", ft_atoi("123456"));
    printf("atoi: %d\n", atoi("123456"));
    printf("ft_atoi: %d\n", ft_atoi("12three45678"));
    printf("atoi: %d\n", atoi("12three45678"));
    printf("ft_atoi: %d\n", ft_atoi("Hello World !"));
    printf("atoi: %d\n", atoi("Hello World !"));
    printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
    printf("atoi: %d\n", atoi("+42 BLAH!"));
    printf("ft_atoi: %d\n", ft_atoi("-42"));
    printf("atoi: %d\n", atoi("-42"));
    printf("ft_atoi: %d\n", ft_atoi("        +42"));
    printf("atoi: %d\n", atoi("        +42"));
    printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
    printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
    printf("ft_atoi: %d\n", ft_atoi("5"));
    printf("atoi: %d\n", atoi("5"));
    return (0);
}
  

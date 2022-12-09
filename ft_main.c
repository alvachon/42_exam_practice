/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/01 09:52:05 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void *ft_putstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;	
	}
}

int main()
{
  char str2[20] = "C programming";
  char str1[20] = "UWU";

  	ft_putstr(str2);
  	ft_putstr(str1);
	return 0;
}
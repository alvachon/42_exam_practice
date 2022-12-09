/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 12:27:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copy with malloc
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(const char *s1)
{
	char *copy = malloc(sizeof(char) * ft_strlen(s1) + 1);
	int	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;	
	}
	return (copy);
}

int	main(void)
{
	char	str[120] = "allo";
	printf("%s", ft_strdup(str));
	return (0);
}
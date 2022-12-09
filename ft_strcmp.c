/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 12:02:25 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
while (s1[i] && s2[i] && s1[i] == s2[i]) i++; return (s1[i] - s2[i])
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	s1[120] = "salut";
	char	s2[120] = "bonjour";

	printf("s1 = %s, %s\n", s1, s2);
	printf("s2 = %s \n", s2);
	ft_strcmp(s1, s2);
	//strcmp(s1, s2);
	printf("s1 - s2 = %d \n", ft_strcmp(s1, s2));
	//printf("s1 - s2 = %d \n", strcmp(s1, s2));
}
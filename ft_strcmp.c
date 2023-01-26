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
#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
    char str1[15];
    char str2[15];
    int ret;
    int res;
    
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCEDF");
    ret = strcmp(str1, str2);
    if (ret < 0)
      printf("str1 is less than str2\n");
    else if (ret > 0)
      printf("str2 is less than str1\n");
    else
      printf("str2 is equal to str1\n");
    res = ft_strcmp(str1, str2);
    if (res < 0)
      printf("str1 is less than str2\n");
    else if (ret > 0)
      printf("str2 is less than str1\n");
    else
      printf("str2 is equal to str1\n");
}

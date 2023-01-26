/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:55:34 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:38:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
while src[i] (dst[i] = src[i]) i++, dst[i] = '\0', return (dst)
*/

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dst, const char *src)
{
	int	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;	
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
  char src[40];
  char dst[100];
  char src1[40];
  char dst1[100];
  
  memset(dst, '\0', sizeof(dst));
  strcpy(src, "This is tutorialspoint.com");
  strcpy(dst, src);
  printf("Final copied string : %s\n", dst);
  
  memset(dst1, '\0', sizeof(dst1));
  ft_strcpy(src1, "This is tutorialspoint.com");
  ft_strcpy(dst1, src1);
  printf("Final copied string : %s\n", dst1);
  return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/12/17 13:50:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *src)
{
  int i = 0;
  int len = ft_strlen(src);
  char  *copy = malloc(sizeof(char) * len + 1);

  if (copy == NULL)
    return (NULL);
  while (src[i])
  {
    copy[i] = src[i];
    i++;
  }
  copy[i] = '\0';
  return (copy);
}

int main()
{
  char *str = "allo\n";
  
  printf("%s", ft_strdup(str));
  return(0);
}

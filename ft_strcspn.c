/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:04:35 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/06 12:22:44 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
  size_t i = 0;
  size_t j;
  
  while (s[i])
  {
    j = 0;
    while (charset[j])
    {
      if (s[i] == charset[j])
        return (i);
      j++;
    }
    i++;
  }
  return (i);
}

int main()
{
   int len = strcspn("Hell0","012345");
   int res = ft_strcspn("Hell0","012345");

   printf("Length of initial segment matching : %d\n", len);
   printf("Length of initial segment matching : %d\n", res);    
   return(0);
}

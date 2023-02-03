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

size_t	ft_strspn(const char *s, const char *charset)
{
  int i = 0;
  int j;
  
  if (s[i])
  {
    j = 0;
    while (charset[j])
    {
      if (s[i] == charset[j])
      {
        i++;
        j = 0;
      }
      j++;
    }
  }
  return (i);
}

int main()
{
   int len = strspn("42geeksfor geeks","4123456789g");
   int res = ft_strspn("42geeksfor geeks","4123456789g");

   printf("Length of initial segment matching : %d\n", len);
   printf("Length of initial segment matching : %d\n", res);    
   return(0);
}
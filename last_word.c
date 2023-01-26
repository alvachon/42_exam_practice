/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/12/09 16:09:36 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  last_word(char *str)
{
  int j = 0;
  int i = 0;
  
  while (str[i])
  {
    if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
      j = i + 1;
    i++;
  }
  while (str[j] >= 33 && str[j] <= 127)
  {
    write(1, &str[j], 1);
    j++;
  }
}

int main(int ac, char **av)
{
  if (ac == 2)
    last_word(av[1]);
  write(1, "\n", 1);
  return (0);
}

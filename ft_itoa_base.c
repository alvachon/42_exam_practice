#include <stdlib.h>
#include <stdio.h>

int ft_abs(int nb)
{
  if (nb < 0)
    nb = -nb;
}

char  *ft_itoa_base(int value, int base)
{
    char  *str;
    int   size = 0;
    char  *tab = "0123456789ABCDEF";
    int   flag = 0;
    int   tmp = value;
    
    if (base < 2 || base > 16)
      return (0);
    if (value < 0 && base == 10)
      flag = 1;
    while (tmp /= base)
      size++;
    size += flag + 1;
    str = malloc(sizeof(char) * size + 1);
    if (!str)
      return (NULL);
    str[size] = '\0';
    if (flag == 1)
      str[0] = '-';
    while (size > flag)
    {
        str[size - 1] = tab[ft_abs(value % base)];
        size--;
        value /= base;
    }
    return (str);
}

int main(int ac, char **av)
{
  if (ac == 3)
    printf("%s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
  return (0);
}

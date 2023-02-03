#include <stdlib.h>
#include <stdio.h>

int valueof(char c)
{
  if (c >= '0' && c <= '9')
    return (c - '0');
  else if (c >= 'a' && c <= 'f')
    return (c - 'a' + 10);
  else if (c >= 'A' && c <= 'F')
    return (c - 'A' + 10);
  return (0);
}

int valid_base(char c, int base)
{
  char hexmin[17] = "0123456789abcdef";
  char hexmaj[17] = "0123456789ABCDEF";
  while (base--)
  {
    if (hexmin[base] == c || hexmaj[base] == c)
      return (1);
  }
  return (0);
}

int ft_atoi_base(char *str, int base)
{
  int n = 0;
  int s = 1;
  int i = 0;
  while (*str <= 32)
    str++;
  if (*str == '-' || *str == '+')
  {
    if (*str == '-')
      s = -1;
    str++;
  }
  while (valid_base(str[i], base))
  {
    n *= base;
    n += valueof(str[i]);
    i++;
  }
  return (n * s);
}

int main()
{
  printf("2 : 011 %d\n", ft_atoi_base("011", atoi("2")));
  printf("8 : 16  %d\n", ft_atoi_base("16", atoi("8")));
  printf("10 : 123 %d\n", ft_atoi_base("123", atoi("10")));
  printf("16 : FF %d\n", ft_atoi_base("FF", atoi("16")));
  return (0);
}

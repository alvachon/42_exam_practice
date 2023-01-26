#include <stdlib.h>
#include <stdio.h>

int ft_isblank(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

int ft_isvalid(char c, int base)
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

int ft_valueof(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
  int result = 0;
  int sign;
  int i = 0;
  
  while (ft_isblank(str[i]))
    i++;
  sign = (str[i] == '-') ? -1 : 1;
  (str[i] == '-' || str[i] == '+') ? ++i : 0;
  while (ft_isvalid(str[i], str_base))
  {
    result *= str_base;
    result += ft_valueof(str[i++]);
  }
  return (result * sign);
}

int main()
{
  printf("2 : 011 %d\n", ft_atoi_base("011", atoi("2")));
  printf("8 : 16  %d\n", ft_atoi_base("16", atoi("8")));
  printf("10 : 123 %d\n", ft_atoi_base("123", atoi("10")));
  printf("16 : FF %d\n", ft_atoi_base("FF", atoi("16")));
  return (0);
}

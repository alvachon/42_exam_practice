#include <stdlib.h>
#include <stdio.h>

int	ft_nb_len(int nb)
{
	long	n;
	int	i;

	i = 0;
	n = nb;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int	i;

	nb = n;
	i = ft_nb_len(n) - 1;
	str = malloc(sizeof(char) * (ft_nb_len(n) + 1));
	if (str == 0)
		return (NULL);
	if (n == -2147483648)
		nb = 2147483648;
	else if (nb < 0)
		nb *= -1;
	str[ft_nb_len(n)] = '\0';
	while (i >= 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main()
{
  printf("%s\n", ft_itoa(33));
  printf("%s\n", ft_itoa(-33));
  printf("%s\n", ft_itoa(12345));
  printf("%s\n", ft_itoa(-12345));
  printf("%s\n", ft_itoa(98765));
  printf("%s\n", ft_itoa(-98765));
  printf("%s\n", ft_itoa(45));
  printf("%s\n", ft_itoa(-45));
  printf("%s\n", ft_itoa(-2147483648));
  printf("%s\n", ft_itoa(2147483647));
  printf("%s\n", ft_itoa(0));
}

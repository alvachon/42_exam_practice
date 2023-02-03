#include <unistd.h>
#include <stdio.h>

//easy version, need to add atoi and putnbr ... 

int	ft_is_prime(int n)
{
	int prime;

	prime = n / 2;
	if (n <= 1)
		return (0);
	if (n == 2 || (prime * 2) != n)
		return (1);
	else
		return (0);
}

int	main()
{
	int	i;
	int	sum;
	int	prime;

	i = 0;
	sum = 0;
	prime = 5;
	while (i <= prime)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

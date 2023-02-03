#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int	biggest;
	int	i = 1;
	
	biggest = tab[0];
	while (i < len)
	{
		if (biggest < tab[i])
			biggest = tab[i];
		i++;
	}
	return (biggest);
}

int main(void)
{
	int	tab[] = {42, 0, 5, 64, 2, 68, 1};

	printf("max : %d\n", max(tab, 7));
	return (0);
}


#include <unistd.h>
//#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char *ft_strrev(char *str)
{
	int len = 0;
	int i = -1;
	while (str[len])
	  len++;
	while (i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}*/

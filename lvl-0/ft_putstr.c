#include <unistd.h>
//#include <string.h>

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;	
	}
}

/*
int main()
{
  char str2[20] = "C programming";
  char str1[20] = "UWU";

  	ft_putstr(str2);
  	ft_putstr(str1);
	return 0;
}*/

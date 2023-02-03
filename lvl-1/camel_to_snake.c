#include <unistd.h>

// Traduct camelCase to snake_case

void	camel_to_snake(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
		  write(1, "_", 1);
		  *str = *str + ' ';
		}
		write(1, &str[0], 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}

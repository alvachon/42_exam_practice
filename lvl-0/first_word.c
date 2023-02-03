#include <unistd.h>

//Learn printable ascii char

void    first_word(char *str)
{
    while (*str <= 32)
        str++;
    while (*str > 32 && *str < 127)
    {
        write(1, &str[0], 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
    return (0);
}

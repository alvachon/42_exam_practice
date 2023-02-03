#include <unistd.h>

// Learn Atbash Cypher implementation (mirror)

void    alpha_mirror(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
        {
          if (*str >= 'A' && *str <= 'Z')
            *str = ('Z' + 'A' - *str);
          else
            *str = ('z' + 'a' - *str);
        }
        write(1, &str[0], 1);
        str++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        alpha_mirror(av[1]);
    write(1, "\n", 1);
}

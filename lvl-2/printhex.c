#include <unistd.h>

int cheap_atoi(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i])
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    return (nb);
}

void printhex(int n)
{
    char *nbr = "0123456789abcdef";
    if (n >= 16)
        printhex(n / 16);
    write(1, &nbr[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printhex(cheap_atoi(av[1]));
    write(1, "\n", 1);
}

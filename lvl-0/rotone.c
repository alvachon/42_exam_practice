#include <unistd.h>

//Learn a Caesar's CYPHER decryption with ROT1 implementation.

void    rotone(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
            *str += 1;
        else if (*str == 'z' || *str == 'Z')
            *str -= 25;
        write(1, &str[0], 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
}

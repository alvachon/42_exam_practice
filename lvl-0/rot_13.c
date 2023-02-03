#include <unistd.h>

//Learn a Caesar's CYPHER decryption with ROT13 implementation

void    rot_13(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
        {
          if (*str > 'm' || (*str > 'M' && *str < ('Z' + 1)))
            *str -= 13;
          else
            *str += 13;
        }
        write(1, &str[0], 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    write(1, "\n", 1);
}

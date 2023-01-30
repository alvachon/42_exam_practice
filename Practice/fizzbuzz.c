#include <unistd.h>

int main()
{
    int n = 0;

    while (n <= 100)
    {
        if (n % 3 == 0)
            write(1, "fizz", 4);
        else if (n % 5 == 0)
            write(1, "buzz", 4);
        else if (n % 3 == 0 && n % 5 == 0)
            write(1, "fizzbuzz", 8);
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n++;
    }
    write(1 '\n', 1);
}


#include <stdio.h>
#include <stdlib.h>

/*
To find the prime factorization of 60, we can start by dividing it by the smallest prime number, 2. 

The function find the first prime factor and then dividing the number by that prime factor, then again the number is divided by the prime factor and so on.
*/

void fprime(int num)
{
    int i = 2;

    if (num == 1)
    {
        printf("1");
    }
    if (num == 2)
    {
        printf("2");
    }
    while (num > 2)
    {
        while (num % i != 0)
        {
            i++;
        }
        printf("%d", i);
        if (num == i)
        {
            break;
        }
        printf("*");
        num = num / i;
        i = 2;
    }
}

int main(int ac, char **av)
{

    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
    return (0);
}

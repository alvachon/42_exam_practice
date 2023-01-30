void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb /10);
        ft_putnbr(nb &

int isprime(int nb)
{
    int i = 2;

    while ( i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_add_prime_sum(int nb)
{
    int i = 2;
    int prime_sum = 0;
    if (nb <= 0)
        return (0);
    while ( i <= nb)
    {
        if (is_prime(i))
            prime_sum += i;
        i++;
    }
    return (prime_sum);
}



void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb < 10)
    {
        c = nb + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(int ac, char **av)
{
    int nb;
    int sum;

    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        sum = 0;
        while (nb > 0)
        {
            if (is_prime(nb--))
                sum += (nb + 1);
        }
        ft_putnbr(sum);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}

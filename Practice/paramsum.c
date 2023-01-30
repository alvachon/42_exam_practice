int main(int ac, char **av)
{
    (void)av;

    if (ac > 1)
    {
        ft_putnbr(ac - 1);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "0", 1);
        write(1, "\n", 1);
    }
}

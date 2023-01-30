int main(int ac, char **av)
{
    int i;

    if (ac == 2 && ft_strlen(av[1]) > 0)
    {
        i = ft_strlen(av[1]) - 1;
        while (space(av[1][i]))
            i--;
        while (!(space(av[1][i])) && i > 0)
            i--;
        if (space(av[1][i]))
            i++;
        while (!(space(av[1][i])) && av[1][i] != '\0')
        {
            ft_putchar(av[1][i]);
            i++;
        }
        ft_putchar('\n');
        return (0);
}


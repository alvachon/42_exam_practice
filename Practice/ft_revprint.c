int main(int ac, char **av)
{
    int i = ft_strlen(av[1]);

    if (ac == 2)
    {
        while (i)
            write(1, &av[1][--i], 1);
    }
    write(1, "\n", 1);
}

int main( int ac, char **av)
{
    int j = 0;
    int i = 0;
    int tab[256] = {0};
    int len_s1 = ft_strlen(av[1]);

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (av[2][j] == av[1][i])
            {
                if (tab[(int)av[1][i]] == 0)
                    i++;
            }
            j++;
        }
        if ( i < len_s1)
            write(1, "\n", 1);
        else
        {
            i = 0;
            while (av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
            write(1, "\n", 1);
        }
    }
    return (0);
}

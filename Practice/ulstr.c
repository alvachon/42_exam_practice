int main( int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (ft_type(av[1][i] == 1)
                av[1][i] += ' ';
            else if (ft_type(av[1][i]) == 2)
                av[1][i] -= ' ';


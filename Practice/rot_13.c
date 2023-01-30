int main(int ac, char **av)
{
    int i = 0;

    if (ac > 1)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';

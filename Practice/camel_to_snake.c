int main(int ac, char**av)
{
    int i = 0;
    if (ac > 1)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                write(1, "_", 1);
                av[1][i] = av[1][i] + ' ';
                write(1, &av[1][i], 1);
                i++;
            }
            else if (av[1][i] >= 'a'

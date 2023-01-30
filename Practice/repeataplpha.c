void mult_alpha( char *str, char min, char max)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        if (str[i] >= min && str[i] <= max)
        {
            count = str[i] - min;

void ft_repeat...

int main(int ac, char **av)
{
    if (ac == 2)
        ft_repeat_alpha(av[1]);
    else
        write(1, "\n", 1);
    return (0);
}

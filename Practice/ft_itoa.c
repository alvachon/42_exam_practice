char *ft_itoa(int nb)
{
    long n = nb;
    int len = ft_len(nb) - 1;
    char *str;

    str = malloc(sizeof(char) * ft_len(nb) + 1);
    if (!str)
        return (NULL)
    if (nb == -intmin)
        n = intmin;
    else if (n < 0)
        n *= -1;
    str[ft_len(n)] = '\0';
    while (len != 0)
    {
        str[len] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}

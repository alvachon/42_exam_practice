void wdmatch(char *s1, char *s2)
{
    int len = 0;
    int i = 0;
    int j = 0;

    while (s1[len])
        len++;
    while (s2[i] && j < len)
    {
        if (s2[i] == s1[j])
            j++;
        i++;
    }
    if (j == len)
        write(1, s1, len);
}

int main( int ac, char **av)
{
    if (ac == 3)
        wdmatch(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}

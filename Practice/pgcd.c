int main(int ac, char **av)
{
    int n1;
    int n2;
    int n;

    if (ac == 3)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[2]);
        n = n1;
        while (n > 0)
        {
            if ((n1 % n == 0) && (n2 % n == 0))
            {
                printf("%d\n", n);
                return (0);
            }
            n--;
        }
    }
    printf("\n");
    return(0);
}

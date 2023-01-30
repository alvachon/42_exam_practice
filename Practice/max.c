int max(int *tab, unsigned int len)
{
    int biggest = tab[0];
    int index = 1;
    while ( index < len)
    {
        if (biggest < tab[index])
            biggest = tab[index];
        index++;
    }
    return (biggest);
}

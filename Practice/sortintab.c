void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int swapped = 0;

    while (i < signed - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            swapped = 1;
        }
        i++;
    }
    if (swapped)
        sort_int_tab(tab, size);
}

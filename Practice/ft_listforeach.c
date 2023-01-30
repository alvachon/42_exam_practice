void ft_list_foreach(t_list *begin, void (*f)(void *))
{
    t_list *list;

    list = begin;

    while(list)
    {
        (*f)(list->data);
        list = list->next;
    }
}

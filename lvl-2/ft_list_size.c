typedef struct s_list
{
  struct s_list *next;
  void          *data;
} t_list;

int	ft_listsize(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->link_next;
		i++;
	}
	return (i);
}


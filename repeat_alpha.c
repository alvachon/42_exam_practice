/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:29 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:42:12 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/


#include <unistd.h>
int	ft_type(char c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (3);
}
void ft_mult_alpha(char *str, char min, char max)
{
	int	i = 0;
	int	count = 0;
	while (str[i])
	{
		if (str[i] >= min &&str[i] <= max)
		{
			count = str[i] - min;
			while (count >= 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		i++;
	}
	write(1, "\n", 1);
}
void ft_repeat_alpha(char *str)
{
	int	i = 0;
	if (ft_type(str[i]) == 1)
		ft_mult_alpha(&str[i], 'A', 'Z');
	else if (ft_type(str[i]) == 2)
		ft_mult_alpha(&str[i], 'a', 'z');
	else if (ft_type(str[i]) == 3)
		write(1, &str[i], 1);
	i++;
}
int		main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat_alpha(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}

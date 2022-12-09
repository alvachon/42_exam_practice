/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:40:01 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/05 15:43:08 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define STR av[1][i]

#include <unistd.h>
#include <stdlib.h>

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int		len = 0;
	int		i = 0;
	int		trig = 0;
	char	*str = av[1];

	while (ft_isspace(*str))
		str++;
	len = ft_strlen(str) - 1;
	while (ft_isspace(str[len]))
		len--;
	str[len + 1] = '\0';
	while (str[i])
	{
		while (ft_isspace(str[i]))
		{
			i++;
			trig = 1;
		}
		if (trig == 1)
		{
			write(1, " ", 1);
			trig = 0;
		}
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
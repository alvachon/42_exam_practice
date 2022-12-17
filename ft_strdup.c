/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/12/17 13:50:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s1)
{
	int	i = 0;
	char *copy = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (copy != NULL)
	{
		while (s1[i])
		{
			copy[i] = s1[i];
			i++;
		}
	}
	return (copy);
}

int main(void) {
	char *greet = "Salut";
	char *test1 = "Gonna pass this test, even if I gotta dup!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(greet));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
	return 0;
}
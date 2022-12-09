/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:55:34 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/05 10:38:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
while src[i] (dst[i] = src[i]) i++, dst[i] = '\0', return (dst)
*/

char *ft_strcpy(char *dst, const char *src)
{
	int	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;	
	}
	dst[i] = '\0';
	return (dst);
}
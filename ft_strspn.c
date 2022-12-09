/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:04:35 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/06 12:22:44 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
Tant que les chars initials sont similaire, on retourne la len.
*/

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t len = 0;
	while (s[len] == charset[len])
		len++;
	return (len);
}

int main () {
   int len = ft_strspn("geeks for geeks","geek");
   printf("Length of initial segment matching : %d\n", len );    
   return(0);
}
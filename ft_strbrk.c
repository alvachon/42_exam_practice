/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbrk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:57:15 by alvachon          #+#    #+#             */
/*   Updated: 2022/09/29 10:00:24 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check for matching character
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
  
char *ft_strpbrk(const char *s, const char *charset)
{

	if ((s == NULL) || (charset == NULL))
		return (NULL);
	while (s)
	{
		if (ft_strchr(charset, *s))
			return (char *)(s);
		else
			s++;
	}
	return (NULL);
}

int main()
{
    // Declaring three strings
    char s1[] = "geeksforgeeks";
    char s2[] = "app";
    char s3[] = "kite";
    char* r, *t;
  
    // Checks for matching character
    // no match found
    r = ft_strpbrk(s1, s2); 
    if (r != 0)
        printf("First matching character: %c\n", *r);
    else
        printf("Character not found");
  
    // Checks for matching character
    // first match found at "e"
    t = ft_strpbrk(s1, s3);
    if (t != 0)
        printf("\nFirst matching character: %c\n", *t);
    else
        printf("Character not found");
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:48:25 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 12:08:12 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	d;

	ptr = (unsigned char *)s;
	d = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (*ptr && n > 0)
	{
		if (*ptr == d)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main() {
    const char *str = "This is a sample string";
    int ch = 's';
    size_t len = 2;

    // Test 1: Find the first occurrence of 's' in str
    char *result = (char *)memchr(str, ch, len);
    char *result2 = (char *)ft_memchr(str, ch, len);
	if (result2 != NULL) {
        printf("Found '%c' at position %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string\n", ch);
    }

    // Test 2: Try to find a character that doesn't exist
    ch = 'z';
    result = (char *)memchr(str, ch, len);
    result2 = (char *)ft_memchr(str, ch, len);
	if (result2 != NULL) {
        printf("Found '%c' at position %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string\n", ch);
    }

    return 0;	
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:10:42 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 12:26:06 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (*ptr1 == *ptr2 && *ptr1 && *ptr2 && n > 1)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*str1 = "This is a test";
	const char	*str2 = "This is also a test";
	size_t		len = 0;

	int	result = memcmp(str1, str2, len);
	int	result2 = ft_memcmp(str1, str2, len);
	printf("actual: %d mine: %d\n", result, result2);

}
*/

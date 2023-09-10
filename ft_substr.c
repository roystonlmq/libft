/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:46:37 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 16:58:29 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*buffer;
	unsigned int	i;

	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}

/*
#include <stdio.h>
int	main(void)
{
	char	test[] = "hello this is my name.";
	unsigned int	start = 5;
	size_t len = 17;
	char	*res = ft_substr(test, start, len);
	printf("%s\n", res);
	printf("%d", res == test);
	free(res);
}
*/

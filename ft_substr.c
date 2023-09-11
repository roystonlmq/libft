/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:46:37 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 21:23:22 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Need to make sure we stop if char *s is a null char, 
even if len indicates otherwise
*/
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*buffer;
	unsigned int	i;

	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len && start <= len && s[i])
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}

/*
int	main(void)
{
	char	test[] = "hello this is my name.";
	unsigned int	start = 4;
	size_t len = 100;
	char	*res = ft_substr(test, start, len);
	printf("%s\n", res);
	free(res);
}
*/

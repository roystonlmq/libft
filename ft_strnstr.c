/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:01:58 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 13:53:41 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*save;
	int		llen;
	int		i;
	int		j;

	save = (char *)big;
	llen = (int)ft_strlen(little);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < (int)len)
	{
		j = 0;
		while (little[j])
		{
			if (little[j] != big[i + j] || (i + j) > (int)len)
				break ;
			j++;
		}
		if (llen == j)
			return (save + i);
		i++;
	}
	return (0);
}

/*
#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	const char	*testbig = "lorem ipsum dolor sit amet";
	const char	*testlittle = "dolor";
	char *ptr;

	ptr = ft_strnstr(testbig, testlittle, 15);
	printf("mine: %s\n", ptr);
	//ptr = strnstr(testbig, testlittle, 4);
	//printf("actual: %s\n", ptr);
}
*/

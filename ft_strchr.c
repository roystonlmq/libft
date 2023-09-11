/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:33:51 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 20:29:07 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *) s);
	return ((char *) NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	const char	test[] = "tripoulette";
	int		c = 't' + 256;

	printf("%s", ft_strchr(test, c));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:41:31 by roylee            #+#    #+#             */
/*   Updated: 2023/09/16 18:42:58 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (*s)
	{
		ft_putchar_fd(*(s++), fd);
		len++;
	}
	return (len);
}
/*
int main(void)
{
	char test[] = "hello world";
	ft_putstr_fd(test, 1);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:36 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/06 10:48:13 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	st = (unsigned char *)s;
	i = 0;
	while (st[i] && i < n)
	{
		if (st[i] == c)
		{
			return ((void *)&st[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "hello";

	printf("%s", ft_memchr(str, 'l', 2));
}*/

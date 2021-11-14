/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:24:47 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/07 14:17:43 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*l;
	unsigned char	*r;

	r = (unsigned char *)src;
	l = (unsigned char *)dst;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (l > r)
	{
		while (i < len)
		{
			l[len - 1] = r[len - 1];
			len--;
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			l[i] = r[i];
	}
	return (dst);
}

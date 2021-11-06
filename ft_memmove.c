/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:24:47 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/06 10:48:46 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*l;
	unsigned char	*r;

	r = (unsigned char *)src;
	l = (unsigned char *)dst;
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
		while (i < len)
		{
			l[i] = r[i];
			i++;
		}
	}
	return (dst);
}

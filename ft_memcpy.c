/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:22:09 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/06 10:48:28 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*lol1;
	unsigned char	*lol2;
	int				i;

	i = 0;
	lol1 = (unsigned char *)src;
	lol2 = (unsigned char *)dst;
	while (n > 0)
	{
		lol2[i] = lol1[i];
		n--;
		i++;
	}
	return (dst);
}	

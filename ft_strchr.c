/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:25:04 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/07 14:09:13 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (*t != (unsigned char)c && *t)
	{
		t++;
	}
	if (*t == (unsigned char)c)
	{
		return ((char *)t);
	}
	return (0);
}

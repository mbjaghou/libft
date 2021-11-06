/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:25:26 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/06 10:49:27 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*b2;

	i = 0;
	a1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while (a1[i] == '\0' && b2[i] == '\0' && a1[i] == b2[i] && i < n - 1)
	{
		i++;
	}
	if (n > 0)
		return ((a1[i] - b2[i]));
	else
		return (0);
}

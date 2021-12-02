/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <mbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:25:26 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/22 02:21:13 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*b2;

	i = 0;
	a1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (a1[i] != '\0' && b2[i] != '\0' && a1[i] == b2[i] && i < n - 1)
	{
		i++;
	}
	return (a1[i] - b2[i]);
}

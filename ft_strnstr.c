/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:42:53 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/07 11:48:26 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (!ft_strncmp(needle, "", 1))
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (len)
	{
		if (haystack == ft_strchr(haystack, needle[0]))
			if (!ft_strncmp(haystack, needle, i) && len >= i)
				return ((char *)haystack);
		len--;
		haystack++;
	}
	return (0);
}

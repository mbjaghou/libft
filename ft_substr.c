/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:46:02 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/09 14:11:18 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*test;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	test = (char *)malloc(sizeof(*s) * (len + 1));
	if (test == 0)
		return (0);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			test[j] = s[i];
			j++;
		}
		i++;
	}
	test[j] = '\0';
	return (test);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:40:01 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/06 16:44:25 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;

	cp = (char *)malloc(sizeof(char) * ft_strlen (s1) + 1);
	if (cp == 0)
	{
		return (NULL);
	}
	else
	{
		cp = ft_strlcpy(cp, s1);
	}
	return (cp);
}

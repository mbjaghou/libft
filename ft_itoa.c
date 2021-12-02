/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:04:12 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/10 14:55:12 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_bob(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i = 1;
	}
	else
		i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	s;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_bob(n);
	if (n <= 0)
		n = -n;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (0);
	str[i] = '\0';
	while (i--)
	{
		s = n % 10 + 48;
		str[i] = s;
		n /= 10;
		if (n == 0 && i == 1)
			str[--i] = '-';
	}
	return (str);
}

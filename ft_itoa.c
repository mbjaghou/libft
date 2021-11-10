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

int	ft_bob(int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n <= 0)
	{
		n = -n;
		j = n;
		i = 1;
	}
	else
	{
		j = n;
		i = 0;
	}
	while (j > 0)
	{
		j /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	s;
	char	*str;

	i = 0;
	j = 0;
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

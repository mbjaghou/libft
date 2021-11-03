/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:44:23 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/03 11:40:35 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

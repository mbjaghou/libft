/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:15:03 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/13 02:24:29 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tm;

	tm = (t_list *)malloc(sizeof(t_list));
	if (!tm)
		return (NULL);
	tm->content = content;
	tm->next = NULL;
	return (tm);
}

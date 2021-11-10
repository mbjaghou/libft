/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:43:32 by mbjaghou          #+#    #+#             */
/*   Updated: 2021/11/10 15:29:05 by mbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_star(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_last(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		bigin;
	int		lost;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	bigin = ft_star(s1, set);
	lost = ft_last(s1, set);
	if (bigin >= lost)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (lost - bigin + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + bigin, lost - bigin + 1);
	return (newstr);
}
/*int main()
{
    char str[] = "aaaabbbba";
    char b[] = "a";
    printf("%s\n", ft_strtrim(str, b));
}*/

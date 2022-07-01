/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:19:12 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/18 16:06:54 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	char	*str;

	if (*set == '\0')
		return (ft_strdup(s1));
	str = 0;
	if (s1 != 0 && set != 0)
	{
		len = ft_strlen(s1);
		start = 0;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > start)
			len--;
		str = malloc(sizeof(*str) * (len - start + 1));
		if (!str)
			return (0);
		ft_strlcpy(str, s1 + start, len - start + 1);
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:37:03 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/16 18:17:41 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	char	*str2;
	size_t	len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	str1 = (char *)malloc(sizeof(*str1) * (len + 1));
	if (str1 == NULL)
		return (0);
	len = 0;
	str2 = str1;
	while (s1[len] != '\0')
	{
		str2[len] = s1[len];
		len++;
	}
	str2[len] = '\0';
	return (str1);
}

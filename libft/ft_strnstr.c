/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:36:55 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/15 16:21:34 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*begin;
	char	*sub;
	size_t	d;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len != 0)
	{
		begin = (char *)haystack;
		sub = (char *)needle;
		d = len;
		while (*haystack && *sub && *haystack == *sub && d != 0)
		{
			haystack++;
			sub++;
			d--;
		}
		if (!*sub)
			return (begin);
		haystack = begin + 1;
		len--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:28:50 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/12 18:11:09 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	str_len(const char *src)
{
	size_t	count;

	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*src1;
	size_t	dst_len;
	size_t	remaing;

	dest = dst;
	src1 = (char *)src;
	remaing = dstsize;
	while (remaing-- != 0 && *dest != '\0')
		dest++;
	dst_len = dest - dst;
	remaing = dstsize - dst_len;
	if (remaing == 0)
		return (dst_len + str_len(src));
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			*dest++ = *src;
			remaing--;
		}
		src++;
	}
	*dest = '\0';
	return (dst_len + (src - src1));
}

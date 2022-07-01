/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:20:05 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/19 17:32:16 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	b;

	b = c;
	ptr = (unsigned char *)s;
	while (n)
	{
		if (*ptr == b)
			return (ptr);
		ptr++;
		n--;
	}
	return (0);
}

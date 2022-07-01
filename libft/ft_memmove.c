/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:01:28 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/19 19:25:56 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr1 > ptr2)
	{
		while (len)
		{
			*(ptr1 + len - 1) = *(ptr2 + len - 1);
			len--;
		}
	}
	else
	{
		while (len)
		{
			*ptr1 = *ptr2;
			ptr1++;
			ptr2++;
			len--;
		}
	}
	return (dst);
}

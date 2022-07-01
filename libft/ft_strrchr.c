/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:35:51 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/12 15:55:43 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;
	char	b;

	len = 0;
	ptr = (char *)s;
	b = c;
	while (*ptr)
	{
		ptr++;
		len++;
	}
	while (*ptr != b && len != 0)
	{
		ptr--;
		len--;
	}
	if (*ptr == b)
		return (ptr);
	return (0);
}

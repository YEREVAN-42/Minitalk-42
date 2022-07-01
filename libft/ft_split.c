/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:54:40 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/23 14:21:54 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_free(char **a, int i)
{
	while (i > 0)
	{
		free(a[i]);
		i--;
	}
	free(a);
	return (NULL);
}

int	ft_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_fill(char const *s, char c)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (ft_len(s, c) + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, (ft_len(s, c) + 1));
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**a;

	i = -1;
	count = ft_count(s, c);
	if (*s == '\0')
		count = 0;
	a = (char **)malloc(sizeof(char *) * (count + 1));
	if (!a)
		return (NULL);
	while (++i != count)
	{
		while (*s == c)
			s++;
		a[i] = ft_fill(s, c);
		if (!a[i])
			ft_free(a, i);
		s = s + ft_len(s, c);
	}
	a[i] = 0;
	return (a);
}

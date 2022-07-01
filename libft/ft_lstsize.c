/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:28:53 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/21 16:35:46 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*head;

	size = 0;
	head = lst;
	while (head != NULL)
	{
		size++;
		head = head -> next;
	}
	return (size);
}

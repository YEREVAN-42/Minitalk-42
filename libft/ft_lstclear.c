/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:12:01 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/21 17:26:17 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	head = *lst;
	if (!lst)
		return ;
	while (head != NULL)
	{
		*lst = head -> next;
		del(head -> content);
		free(head);
		head = *lst;
	}
}

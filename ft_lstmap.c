/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:16:19 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/29 18:16:14 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_el;
	t_list	*begin;

	begin = NULL;
	if (f)
	{
		current = lst;
		while (current)
		{
			new_el = ft_lstnew((*f)(current->content));
			if (!new_el)
				ft_lstclear(&begin, del);
			if (!begin)
				begin = new_el;
			else
				ft_lstadd_back(&begin, new_el);
			current = current->next;
		}
	}
	return (begin);
}

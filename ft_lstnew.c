/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:53:06 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/25 20:29:57 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elt;

	new_elt = (t_list *)malloc(sizeof(t_list));
	if (!new_elt)
		return (NULL);
	if (!content)
		new_elt->content = NULL;
	else
		new_elt->content = content;
	new_elt->next = NULL;
	return (new_elt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:32:39 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/29 15:50:08 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*usrc;
	unsigned char	*udst;

	if (dst == src || !len)
		return (dst);
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;
	if (dst <= src)
	{
		i = 0;
		while (i++ < len)
			udst[(i - 1)] = usrc[(i - 1)];
	}
	else
	{
		while (len-- > 0)
			udst[len] = usrc[len];
	}
	return (dst);
}

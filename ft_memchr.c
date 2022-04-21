/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:39:21 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/25 14:39:53 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*us;
	unsigned char	cmp;

	us = (unsigned char *)s;
	cmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (us[i] == cmp)
			return ((void *)&us[i]);
		i++;
	}
	return (NULL);
}

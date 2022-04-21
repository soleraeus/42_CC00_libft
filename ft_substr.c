/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:19:13 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/26 15:02:22 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dst;

	if (!s)
		return (ft_calloc(1, sizeof(char)));
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if ((s_len - start) <= len)
		len = s_len - start;
	dst = (char *)ft_calloc((len + 1), sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (s && s[(start + i)] && i < len)
	{
		dst[i] = s[(start + i)];
		i++;
	}
	return (dst);
}

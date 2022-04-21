/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:10:32 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/26 14:46:59 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	char	cc;
	size_t	i;

	cc = (char)c;
	i = 0;
	ret = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			ret = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		ret = (char *)&s[i];
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:41:28 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/26 15:10:25 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;

	if (!s1 || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	if (!set || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && ft_strchr(set, s1[(end - 1)]))
		end--;
	return (ft_substr(s1, (unsigned int)begin, (end - begin)));
}

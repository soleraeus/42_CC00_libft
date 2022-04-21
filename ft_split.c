/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:49:35 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/26 15:25:26 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lcl_ft_countwords(char const *s, char const c)
{
	int		nb_words;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			nb_words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nb_words);
}

static char	*lcl_ft_addword(char const *s, char const c, size_t *index)
{
	char	*word;
	size_t	word_len;

	word_len = 0;
	while (s[*index] && s[*index] == c)
		*index += 1;
	while (s[(*index + word_len)] && s[(*index + word_len)] != c)
		word_len++;
	word = (char *)ft_calloc((word_len + 1), sizeof(char));
	if (!word)
		return (NULL);
	word_len = 0;
	while (s[*index] && s[*index] != c)
	{
		word[word_len] = s[*index];
		*index += 1;
		word_len++;
	}
	return (word);
}

static void	lcl_freetab(char **dst_tab, size_t i)
{
	while (i-- > 0)
		free(dst_tab[i]);
	free(dst_tab);
}

char	**ft_split(char const *s, char c)
{
	char	**dst_tab;
	size_t	index;
	size_t	i;
	size_t	nb_words;

	nb_words = lcl_ft_countwords(s, c);
	dst_tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!dst_tab)
		return (NULL);
	dst_tab[nb_words] = NULL;
	i = 0;
	index = 0;
	while (i < nb_words)
	{
		dst_tab[i] = lcl_ft_addword(s, c, &index);
		if (!dst_tab[i])
		{
			lcl_freetab(dst_tab, i);
			return (NULL);
		}
		i++;
	}
	return (dst_tab);
}

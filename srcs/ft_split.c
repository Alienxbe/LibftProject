/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:16 by mykman            #+#    #+#             */
/*   Updated: 2020/11/21 18:00:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsize(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s++ != c)
		i++;
	return (i);
}

static int	ft_wordcount(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			wc++;
		s += ft_wordsize(s, c);
	}
	return (wc);
}

char		**ft_split(const char *s, char c)
{
	char	**tab;
	char	*word;
	int		ts;
	int		ws;
	int		i;

	ts = ft_wordcount(s, c);
	i = -1;
	if (!(tab = (char **)malloc(sizeof(char *) * (ts + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			ws = ft_wordsize(s, c);
			if (!(word = (char *)ft_calloc(sizeof(char *), ws + 1)))
				return (NULL);
			tab[++i] = ft_memcpy(word, s, ws);
			s += ws;
		}
	}
	return (tab);
}

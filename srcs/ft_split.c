/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:16 by mykman            #+#    #+#             */
/*   Updated: 2020/11/22 13:23:29 by mykman           ###   ########.fr       */
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
	int		ts;
	int		ws;
	int		i;

	if (!s)
		return (NULL);
	ts = ft_wordcount(s, c);
	i = -1;
	if (!(tab = (char **)ft_calloc(sizeof(char *), (ts + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			ws = ft_wordsize(s, c);
			if (!(tab[++i] = (char *)ft_calloc(sizeof(char *), ws + 1)))
				return (NULL);
			tab[i] = ft_memcpy(tab[i], s, ws);
			s += ws;
		}
	}
	return (tab);
}

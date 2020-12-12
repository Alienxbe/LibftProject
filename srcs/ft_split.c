/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:16 by mykman            #+#    #+#             */
/*   Updated: 2020/12/09 17:37:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void	*ft_freeall(char ***tab, int i)
{
	int	j;

	j = -1;
	while (++j < i)
	{
		printf("%s\n", *tab[j]);
		free(*tab[j]);
	}
	free(*tab);
	return (NULL);
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
			if (!(tab[++i] = (char *)ft_calloc(sizeof(char), ws + 1)))
				return (ft_freeall(&tab, i));
			tab[i] = ft_memcpy(tab[i], s, ws);
			s += ws;
		}
	}
	return (tab);
}

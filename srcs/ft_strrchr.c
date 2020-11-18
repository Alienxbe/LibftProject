/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 07:52:01 by mykman            #+#    #+#             */
/*   Updated: 2020/11/18 08:09:46 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = -1;
	last = NULL;
	while (s[++i])
		if (s[i] == c)
			last = (char *)s + i;
	return ((s[i] == c) ? (char *)s + i : last);
}
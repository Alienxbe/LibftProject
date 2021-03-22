/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 07:52:01 by mykman            #+#    #+#             */
/*   Updated: 2021/03/22 20:15:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = -1;
	last = NULL;
	if (!s)
		return (NULL);
	while (s[++i])
		if (s[i] == c)
			last = (char *)s + i;
	if (s[i] == c)
		return ((char *)s + i);
	return (last);
}

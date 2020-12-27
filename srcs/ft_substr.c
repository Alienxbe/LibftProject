/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:45:37 by mykman            #+#    #+#             */
/*   Updated: 2020/12/27 21:07:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;


	if (ft_strlen(s) - start > len)
		size = ft_strlen(s) - start;
	else
		size = len



	if (!s)
		return (NULL);
	if (!(ptr = (char *)ft_calloc(sizeof(*ptr), )))
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (i >= start && j < len)
			ptr[j++] = s[i];
	return (ptr);
}

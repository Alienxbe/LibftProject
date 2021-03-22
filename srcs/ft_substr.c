/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:45:37 by mykman            #+#    #+#             */
/*   Updated: 2021/03/22 20:17:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start;
	p = (char *)ft_calloc(sizeof(*p), len + 1);
	if (start > ft_strlen(s) || !p)
		return (NULL);
	return (ft_memcpy(p, s + start, len));
}

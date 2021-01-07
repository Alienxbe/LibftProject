/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:45:37 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 19:55:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	len = (len > ft_strlen(s) - start + 1) ? ft_strlen(s) - start : len;
	if (start > ft_strlen(s) || !(p = (char *)ft_calloc(sizeof(*p), len + 1)))
		return (NULL);
	return (ft_memcpy(p, s + start, len));
}

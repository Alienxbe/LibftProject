/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:16:24 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 19:41:53 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = -1;
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (src[++i] && i < dstsize - dst_len - 1)
		dst[i + dst_len] = src[i];
	dst[i + dst_len] = 0;
	return (dst_len + ft_strlen(src));
}

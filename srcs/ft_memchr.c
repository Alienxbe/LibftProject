/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 08:20:21 by mykman            #+#    #+#             */
/*   Updated: 2020/12/27 20:27:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = -1;
	while (++i < n)
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((const unsigned char *)s + i));
	return (NULL);
}

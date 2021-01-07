/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:41:31 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 18:58:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && dest && src)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)dest + i) == (unsigned char)c)
			return (((unsigned char *)dest + i + 1));
		i++;
	}
	return (NULL);
}

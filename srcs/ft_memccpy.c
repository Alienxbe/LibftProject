/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:41:31 by mykman            #+#    #+#             */
/*   Updated: 2020/11/20 14:34:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	letter;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(ptr_dest + i) = *(ptr_src + i);
		if (*(ptr_dest + i) == letter)
			return ((ptr_dest + i + 1));
		i++;
	}
	return (NULL);
}

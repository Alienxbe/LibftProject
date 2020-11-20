/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:11:37 by mykman            #+#    #+#             */
/*   Updated: 2020/11/20 09:42:59 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char *)malloc(nmemb * size)))
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		ptr[i++] = 0;
	return ((void *)ptr);
}

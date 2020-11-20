/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:19:53 by mykman            #+#    #+#             */
/*   Updated: 2020/11/20 09:43:46 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = (size_t)(ft_strlen(s) + 1);
	if (!(ptr = malloc(sizeof(*ptr) * size)))
		return (NULL);
	return (ft_memcpy(ptr, s, size));
}

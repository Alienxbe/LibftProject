/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 08:32:10 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 19:18:01 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0)
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return ((i == n) ? 0 : ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

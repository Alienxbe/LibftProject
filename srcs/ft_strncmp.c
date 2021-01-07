/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:34:16 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 19:55:23 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (ptr_s1[i] && ptr_s2[i] && i < n && ptr_s1[i] == ptr_s2[i])
		i++;
	return ((i == n) ? 0 : ptr_s1[i] - ptr_s2[i]);
}

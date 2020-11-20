/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:58:29 by mykman            #+#    #+#             */
/*   Updated: 2020/11/20 08:53:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char *r;

	r = (char *)s;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return ((*r == c) ? r : NULL);
}

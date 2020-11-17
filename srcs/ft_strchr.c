/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:58:29 by mykman            #+#    #+#             */
/*   Updated: 2020/11/17 18:20:37 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i])
		printf("%c\n", s[i]);
		if (s[i] == c)
			return ((char *)(s + i));
	return (NULL);
}
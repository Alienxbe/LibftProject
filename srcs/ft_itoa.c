/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:26:55 by mykman            #+#    #+#             */
/*   Updated: 2021/03/22 19:14:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int n, int c)
{
	if (!n)
		return (c);
	if (n < 0)
		return (ft_intsize(n / -10, c + 2));
	return (ft_intsize(n / 10, c + 1));
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	int				size;

	un = n;
	size = ft_intsize(n, 0) + 1;
	if (!n)
		size++;
	str = (char *)ft_calloc(sizeof(char), size);
	if (!str)
		return (NULL);
	str = ft_memset(str, '0', size - 1);
	if (n < 0)
		un = -n;
	while (--size)
	{
		str[size - 1] = '0' + un % 10;
		if (n < 0 && !(size - 1))
			str[size - 1] = '-';
		un /= 10;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:46:02 by mykman            #+#    #+#             */
/*   Updated: 2021/03/22 20:13:04 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		n;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	ptr = (char *)ft_calloc(n + 1, sizeof(*ptr));
	if (!ptr)
		return (NULL);
	while (n--)
		ptr[n] = f(n, s[n]);
	return (ptr);
}

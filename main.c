/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:54:10 by mykman            #+#    #+#             */
/*   Updated: 2021/01/07 18:51:03 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char *str;

	str = (char *)ft_calloc(sizeof(char), 10);
	printf("%s\n", (char *)ft_memset(str, '5', 9));
	return (0);
}

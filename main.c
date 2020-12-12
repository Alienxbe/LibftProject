/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:54:10 by mykman            #+#    #+#             */
/*   Updated: 2020/12/09 17:36:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char *str = "Salut toi comment ca va";
	char **tab = ft_split(str, ' ');
	int i;

	i = -1;
	while (tab[++i])
		printf("%s\n", tab[i]);
	ft_freeall(&tab, i - 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:54:10 by mykman            #+#    #+#             */
/*   Updated: 2020/11/23 14:07:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	t_list	*l;
	int		n;

	n = 32;
	l = ft_lstnew(&n);
	printf("%d %p\n", *(int *)(l->content), l->next);
	return (0);
}

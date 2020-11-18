/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:54:10 by mykman            #+#    #+#             */
/*   Updated: 2020/11/18 08:10:17 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[] = "Bonjour tout vas bien";
	printf("%p\n", ft_strrchr(str, '\0'));
	printf("%p\n", strrchr(str, '\0'));
	return 0;
}

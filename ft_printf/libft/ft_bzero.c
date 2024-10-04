/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:16:06 by yawang            #+#    #+#             */
/*   Updated: 2023/11/21 18:53:59 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
 * How to do the test??
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	*str1 = "hello";
	char	*str2 = "hello";

	printf("%s\n", str1);
	printf("%s\n", str2);
	bzero(str1, 3);
	ft_bzero(str2, 3);
	printf("%s\n", str1);
	printf("%s\n", str2);
}*/

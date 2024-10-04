/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:11:55 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 18:45:36 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Testing with overlapping memory regions
    ft_memmove(destination, source + 6, 5);

    // Print the result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    // Testing without overlapping memory regions
    ft_memmove(destination, source, 5);

    // Print the result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/

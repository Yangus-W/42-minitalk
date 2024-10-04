/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:41:44 by yawang            #+#    #+#             */
/*   Updated: 2023/12/10 17:11:57 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	cdest = dest;
	csrc = src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";
    char str3[] = "Geeks";
    char str4[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);
    puts("str3 before memcpy ");
    puts(str3);

    // Copies contents of str2 to str1
    memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);
    ft_memcpy(str3, str4, sizeof(str4));

    puts("\nstr3 after memcpy ");
    puts(str3);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:06:57 by yawang            #+#    #+#             */
/*   Updated: 2023/12/10 17:21:24 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("ft_strncmp: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("strncmp: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}*/

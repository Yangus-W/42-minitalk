/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:37:07 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 18:07:50 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_find_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_find_set(set, s1[end - 1]))
		end--;
	str = malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start + i)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;

	str = ft_strtrim(argv[1], argv[2]);
	if (argc > 1)
	{
		printf("%s\n", str);
	}
	free(str);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:15:41 by yawang            #+#    #+#             */
/*   Updated: 2023/12/05 18:56:17 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;

	sub_len = ft_strlen(s + start);
	if (sub_len > len)
		sub_len = len;
	return (sub_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	sub_len;

	i = 0;
	if (!s || start >= ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	sub_len = get_sub_len(s, start, len);
	str = malloc((sub_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < sub_len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ft_substr: %s\n", ft_substr("hello there", 6, 3));
	return (0);
}*/

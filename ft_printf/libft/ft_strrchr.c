/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:26:45 by yawang            #+#    #+#             */
/*   Updated: 2023/12/03 20:58:00 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		i;
	size_t		len;

	str = NULL;
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*s == (const char)c)
			str = (char *)s;
		s++;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("hellooooo", 'l'));
	printf("%s\n", strrchr("hellooooo", 'l'));
	printf("%s\n", strrchr("hellooooo", 's'));
	printf("%s\n", strrchr("hellooooo", 's'));
}*/

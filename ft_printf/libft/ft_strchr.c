/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:24:38 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 15:44:25 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	size_t		len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "tripouille";
	
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", strchr(s, 0));
	return (0);
}*/

/*
char    *ft_strchr(const char *s, int c)
{
        while (*s)
        {
                if (*s == c)
                        return ((char *)s);
                s++;
        }
        return (NULL);
}
*/

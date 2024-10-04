/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:08:33 by yawang            #+#    #+#             */
/*   Updated: 2023/12/10 17:28:12 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	if (!dst || !src)
		return (0);
	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && i < size - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/*#include <stdio.h>

int	main(void)
{
	char dst[10] = "hello";
	const char *src = "the";
	printf("dst: %s\n", dst);
	printf("src: %s\n", src);
	printf("size: %d\n", 10);
	printf("size of new string: %zu\n", ft_strlcat(dst, src, 10));
	return (0);
}*/

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dest[30]; 
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	
	printf("%zu\n", ft_strlcat(dest, src, 0));
	printf("%zu\n", strlcat(dest, src, 0));
	//printf("%d", )
	
}*/

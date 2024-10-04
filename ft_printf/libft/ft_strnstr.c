/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:36:01 by yawang            #+#    #+#             */
/*   Updated: 2023/11/21 18:45:52 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (j == len_little)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

// Assuming the ft_strnstr function is declared in "libft.h"
// char *ft_strnstr(const char *big, const char *little, size_t len);

int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "ello";
    size_t max_length = 10;

    char *result = ft_strnstr(haystack, needle, max_length);

    if (result != NULL) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
*/

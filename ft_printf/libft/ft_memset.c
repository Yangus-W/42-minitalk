/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:01:05 by yawang            #+#    #+#             */
/*   Updated: 2023/11/21 18:47:59 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[50] = "GeeksForGeeks is for programming geeks."; 
	char str2[50] = "GeeksForGeeks is for programming geeks."; 
    	printf("\nBefore memset(): %s\n", str1); 
    	printf("\nBefore ft_memset(): %s\n", str2); 
  
    	// Fill 8 characters starting from str[13] with '.' 
    	memset(str1 + 13, '.', 8 * sizeof(char));
	printf("%c", '\n');
	ft_memset(str2 + 13, '.', 8 * sizeof(char));
	printf("%c", '\n');
    	printf("After memset():  %s", str1); 
	printf("%c", '\n');
    	printf("After ft_memset():  %s", str2); 
    	return 0; 
}*/

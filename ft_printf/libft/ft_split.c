/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:26:19 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 17:59:16 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* In C, functions are global by default. The 'static' keyword is used to 
 * restrict access to the functions to the file where they are declaried. */

static void	malloc_fail(char **tab, size_t i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	fill_tab(char *str, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
}

static void	set_mem(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	index;
	size_t	i;

	index = 0;
	i = 0;
	while (s[index])
	{
		count = 0;
		while (s[index + count] && s[index + count] != c)
			count++;
		if (count > 0)
		{
			tab[i] = malloc((count + 1) * sizeof(char));
			if (!tab[i])
				return (malloc_fail(tab, i));
			fill_tab(tab[i++], (s + index), c);
			index += count;
		}
		else
			index++;
	}
	tab[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	set_mem(tab, s, c);
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int	length;
	printf("string: hello+world+you\n");
	printf("delimiter character: +\n");
	tab = ft_split("-++hello+g+g+world+o-=+you+++", '+');
	length = count_words("-++hello+g+g+world+o-=+you+++", '+');
	printf("length of string: %d\n", length);
	printf("String array Elements are:\n");

  	for (int i = 0; i < length; i++)
  	{
    		printf("%s\n", tab[i]);
  	}
  	return 0;
}*/

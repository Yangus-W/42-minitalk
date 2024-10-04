/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:17:10 by yawang            #+#    #+#             */
/*   Updated: 2023/11/08 22:01:12 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper('t'));
	printf("%c\n", toupper('t'));
	printf("%c\n", ft_toupper('u'));
	printf("%c\n", toupper('u'));
}*/

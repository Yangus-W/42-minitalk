/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:25:03 by yawang            #+#    #+#             */
/*   Updated: 2023/11/21 19:25:07 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* '-' should be included as a digit */
static size_t	count_digit(long n)
{
	size_t	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		digit = 1;
	}
	if (n == 0)
		digit = 1;
	else
	{
		while (n)
		{
			n /= 10;
			digit++;
		}
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digit;
	long	nb;
	int		is_negative;

	digit = count_digit((long)n);
	str = malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nb = (long)n;
	is_negative = 0;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		is_negative = 1;
	}
	str[digit] = '\0';
	while (digit > (size_t)is_negative)
	{
		str[digit - 1] = nb % 10 + '0';
		nb /= 10;
		digit--;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(297834));
	printf("%s\n", ft_itoa(-297834));
	printf("%s\n", ft_itoa(297834000));
	printf("%s\n", ft_itoa(0));
}*/

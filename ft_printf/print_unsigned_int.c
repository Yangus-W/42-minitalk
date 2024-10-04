/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:04:49 by yawang            #+#    #+#             */
/*   Updated: 2023/12/25 18:15:17 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count_digit(unsigned long n)
{
	size_t	digit;

	digit = 0;
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

char	*ft_itoa_unsigned(unsigned int n)
{
	char			*str;
	size_t			digit;
	unsigned long	nb;

	digit = count_digit((unsigned long)n);
	str = malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nb = (unsigned long)n;
	str[digit] = '\0';
	while (digit > 0)
	{
		str[digit - 1] = nb % 10 + '0';
		nb /= 10;
		digit--;
	}
	return (str);
}

int	print_unsigned_int(unsigned long n)
{
	char	*nb;
	int		result;

	nb = ft_itoa_unsigned(n);
	if (!nb)
		return (-1);
	result = print_str(nb);
	free(nb);
	return (result);
}

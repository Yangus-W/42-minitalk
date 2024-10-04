/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:56:11 by yawang            #+#    #+#             */
/*   Updated: 2023/12/25 18:13:43 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function handles i, d, x and X */

int	print_digit(long n, int base, int i)
{
	int		count;
	char	*symbols;

	if (i == 1)
		symbols = "0123456789abcdef";
	if (i == 2)
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base, i) + 1);
	}
	else if (n < base)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit(n / base, base, i);
		return (count + print_digit(n % base, base, i));
	}
}

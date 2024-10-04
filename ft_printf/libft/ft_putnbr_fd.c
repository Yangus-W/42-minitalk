/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:24:23 by yawang            #+#    #+#             */
/*   Updated: 2023/12/05 20:19:00 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
}
/*
#include <stdio.h>

int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(2, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(21473648, 1);
	write(1, "\n", 1);
}*/

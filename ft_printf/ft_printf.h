/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:51:04 by yawang            #+#    #+#             */
/*   Updated: 2023/12/25 17:17:02 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	print_char(int c);
int	print_str(char *str);
int	print_digit(long n, int base, int i);
int	print_ptr(unsigned long long ptr);
int	print_unsigned_int(unsigned long n);
int	ft_printf(const char *format, ...);

#endif

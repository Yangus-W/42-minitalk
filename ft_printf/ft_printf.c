/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:18:51 by yawang            #+#    #+#             */
/*   Updated: 2023/12/25 18:13:05 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)(va_arg(ap, int)), 10, 1);
	else if (specifier == 'u')
		count += print_unsigned_int((unsigned long)(va_arg(ap, unsigned int)));
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16, 1);
	else if (specifier == 'X')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16, 2);
	else if (specifier == '%')
		count += print_char('%');
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

/* TEST */
/*
#include <stdio.h>
int	main(void)
{
	int	count;
	char	*ptr = "hedfgsllo";

	count = ft_printf("%d\n", 111);
	ft_printf("The chars written are %d\n", count);
	count = printf("%d\n", 111);
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%p\n", ptr);
	ft_printf("The chars written are %d\n", count);
	count = printf("%p\n", ptr);
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%p\n", "oisdjf");
	ft_printf("The chars written are %d\n", count);
	count = printf("%p\n", "oisdjf");
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%i\n", 10);
	ft_printf("The chars written are %d\n", count);
	count = printf("%i\n", 10);
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%u\n", -109);
	ft_printf("The chars written are %d\n", count);
	count = printf("%u\n", -109);
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%%\n", '%');
	ft_printf("The chars written are %d\n", count);
	count = printf("%c\n", '%');
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%x\n", 111);
	ft_printf("The chars written are %d\n", count);
	count = printf("%x\n", 111);
	printf("The chars written are %d\n", count);
	
	count = ft_printf("%X\n", 111);
	ft_printf("The chars written are %d\n", count);
	count = printf("%X\n", 111);
	printf("The chars written are %d\n", count);
} 
*/
// write returns the number of bytes upon successful completion
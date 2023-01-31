/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:23:30 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/24 15:23:32 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ft(const char c, int count, va_list args)
{
	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	if (c == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long));
	if (c == 'd' || c == 'i')
		count += ft_print_int(va_arg(args, int));
	if (c == 'u')
		count += ft_print_unsigned_int(va_arg(args, int));
	if (c == 'x')
		count += ft_print_hex1(va_arg(args, int), 'x');
	if (c == 'X')
		count += ft_print_hex1(va_arg(args, int), 'X');
	if (c == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_ft(str[i + 1], i, args);
			i++;
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

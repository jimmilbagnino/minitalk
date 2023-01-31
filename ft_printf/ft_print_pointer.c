/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:53:59 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/25 09:16:02 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_print_hex(n / 16);
	write(1, &base[(int)(n % 16)], 1);
}

int	counthexuns(unsigned long n)
{	
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int	ft_print_pointer(unsigned long n)
{
	int		len;

	len = 0;
	if ((void *)n == NULL)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	ft_print_hex(n);
	len += counthexuns(n);
	return (len);
}

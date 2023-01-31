/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:47:29 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/25 11:47:31 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex1(unsigned int n, char baseform)
{
	unsigned long		g;
	char				*base;

	g = n;
	if (baseform == 'x')
		base = "0123456789abcdef";
	else if (baseform == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (g == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (g >= 16)
		ft_print_hex1(g / 16, baseform);
	write(1, &base[(int)(g % 16)], 1);
	return (ft_counthex(n));
}

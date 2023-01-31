/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:19:34 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/27 10:20:13 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr_fd(unsigned int n, int fd)
{
	unsigned long int	g;

	g = n;
	if (g > 9)
	{
		ft_putnbr_fd(g / 10, fd);
	}
	ft_putchar_fd(g % 10 + '0', fd);
}

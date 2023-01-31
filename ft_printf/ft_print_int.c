/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:23:47 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/25 11:23:50 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void   ft_putstr_fd(char *s, int fd)
{
  while(s)
    ft_putchar_fd(*s++, fd);
}
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
*/

int	ft_print_int(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_countdec(n));
}

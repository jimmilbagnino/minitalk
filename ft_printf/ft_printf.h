/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:40:23 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/25 08:42:39 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putunsnbr_fd(unsigned int n, int fd);
int		ft_counthex(unsigned long n);
int		ft_countdec(int n);
int		ft_countuns(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_pointer(unsigned long n);
int		ft_print_int(int n);
int		ft_print_unsigned_int(unsigned int n);
int		ft_print_hex1(unsigned int n, char baseform);
int		ft_printf(const char *str, ...);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:08:49 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/10 20:08:53 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i--] = '\0';
	while (n > 9)
	{
		str[i--] = 48 + (n % 10);
		n /= 10;
	}
	str[i] = n + '0';
	return (str);
}

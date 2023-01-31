/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:19:40 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/05 14:21:40 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*st1;
	size_t				i;
	unsigned const char	*st2;

	st1 = s1;
	st2 = s2;
	i = 0;
	while (i < n - 1 && st1[i] == st2[i])
	{
		i++;
	}
	if ((st1[i] == '\0' && st2[i] == '\0') || n == 0)
		return (0);
	return (st1[i] - st2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:19:12 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/04 12:19:24 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*d1;
	size_t	i;

	s1 = (char *)src;
	d1 = (char *)dst;
	i = 0;
	if (d1 > s1)
		while (len-- > 0)
			d1[len] = s1[len];
	else
	{
		while (i < len)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	return (dst);
}

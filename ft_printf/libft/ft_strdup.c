/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:26:43 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/07 14:26:46 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

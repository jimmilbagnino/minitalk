/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:06:35 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/08 18:06:52 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;	

	i = 0;
	j = 0;
	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[j] != '\0')
	{
		s[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

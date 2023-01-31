/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:42:01 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/08 22:42:03 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_c_s(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	res = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			res++;
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (res);
}

size_t	count_c_e(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	res;

	j = 0;
	i = ft_strlen(s1) - 1;
	res = ft_strlen(s1);
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			res--;
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*newstr;
	size_t		i;
	size_t		last;
	size_t		first;

	i = 0;
	first = count_c_s(s1, set);
	last = count_c_e(s1, set);
	if (s1[first] == '\0')
	{
		first = 0;
		last = 0;
	}
	newstr = (char *) malloc(sizeof(char) * (last - first + 1));
	if (!newstr)
		return (NULL);
	while (first < last)
	{
		newstr[i] = s1[first];
		i++;
		first++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:08:22 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/10 20:08:25 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_list;

	n_list = NULL;
	n_list = malloc(sizeof(t_list));
	if (!n_list)
		return (NULL);
	n_list->content = content;
	n_list->next = NULL;
	return (n_list);
}

/*
typedef struct s_list
{
void		*content;
struct s_list 	*next;
} 		t_list;
*/

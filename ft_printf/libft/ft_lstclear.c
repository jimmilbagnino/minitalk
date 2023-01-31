/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:41:16 by rgalata           #+#    #+#             */
/*   Updated: 2022/10/19 22:41:18 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*now;

	now = *lst;
	while (now)
	{
		next = now->next;
		ft_lstdelone(now, del);
		now = next;
	}
	*lst = NULL;
}

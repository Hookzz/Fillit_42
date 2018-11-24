/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 03:08:32 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/21 03:42:00 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_rev(t_list **begin_list)
{
	t_list *last;
	t_list *current;
	t_list *previous;

	if (!begin_list)
		return ;
	last = ft_lst_last(*begin_list);
	current = last;
	while ((*begin_list)->next)
	{
		previous = *begin_list;
		while (previous->next != current)
			previous = previous->next;
		previous->next = NULL;
		current->next = previous;
		current = previous;
	}
	*begin_list = last;
}

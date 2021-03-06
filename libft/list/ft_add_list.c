/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 12:32:55 by bdurst            #+#    #+#             */
/*   Updated: 2020/01/04 17:16:43 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_add_list(t_list *begin_list, t_list *new_list)
{
	if (begin_list && new_list)
	{
		new_list = ft_go_end_list(new_list);
		if (begin_list->next)
		{
			new_list->next = begin_list->next;
			begin_list->next->prev = new_list;
		}
		new_list = ft_go_start_list(new_list);
		new_list->prev = begin_list;
		begin_list->next = new_list;
	}
	return ;
}

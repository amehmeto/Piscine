/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 20:41:14 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/22 23:07:23 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*tmp2;

	tmp = *begin_list;
	if (!(*cmp)(tmp->data, data_ref))
	{
		*begin_list = tmp->next;
		free(tmp);
		tmp = *begin_list;
	}
	while (tmp && tmp->next)
	{
		if (!(*cmp)(tmp->next->data, data_ref))
		{
			tmp2 = tmp->next;
			tmp->next = tmp->next->next;
			free(tmp2);
			tmp2 = NULL;			
		}
		tmp = tmp->next;
	}
}

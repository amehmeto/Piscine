/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 20:19:31 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/22 20:59:19 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
												void *data_ref, int (*cmp)())
{
	t_list		*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (!(*cmp)(tmp->data, data_ref))
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}

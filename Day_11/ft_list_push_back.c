/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 02:38:55 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/12 06:56:34 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		tmp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

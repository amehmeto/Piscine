/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 20:26:07 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/22 21:24:23 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (!(*cmp)(tmp->data, data_ref))
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

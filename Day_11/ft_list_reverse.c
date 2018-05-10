/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 06:58:14 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/12 10:32:08 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*tmp_list;
	t_list		*tmp;
	t_list		*tmp2;

	tmp_list = NULL;
	tmp = *begin_list;
	while (tmp)
	{
		tmp2 = tmp->next;
		if (tmp_list)
		{
			tmp->next = tmp_list;
			tmp_list = tmp;
		}
		else
		{
			tmp_list = tmp;
			tmp_list->next = NULL;
		}
		tmp = tmp2;
	}
	*begin_list = tmp_list;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 23:28:15 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/23 03:36:19 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list		*ft_list_swap(t_list *tmp)
{
	t_list		*tmp2;
	t_list		*tmp3;

	tmp2 = tmp->next;
	tmp3 = tmp->next->next->next;
	tmp->next = tmp->next->next;
	tmp->next->next->next = tmp2;
	tmp->next->next = tmp3;
	tmp2 = NULL;
	tmp3 = NULL;
	return (tmp2);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int			to_be_sorted_again;
	t_list		*tmp;

	to_be_sorted_again = 1;
	while (to_be_sorted_again)
	{
		to_be_sorted_again = 0;
		tmp = *begin_list;
		while (tmp && tmp->next && tmp->next->next)
		{
			printf("Wesh\n");
			if ((*cmp)(tmp->next->data, tmp->next->next->data) > 0)
			{
				to_be_sorted_again = 1;
				ft_list_swap(tmp);
			}
			tmp = tmp->next;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 06:05:15 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/11 06:43:32 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*tmp;
	int		i;

	(void)ac;
	tmp = NULL;
	begin_list = ft_create_elem(av[1]);
	i = 2;
	while (av[i])
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = begin_list;
		begin_list = tmp;
		i++;
	}
	return (tmp);
}

int			main(int ac, char **av)
{
	t_list		*list;

	list = NULL;
	if (ac > 1)
		list = ft_list_push_params(ac, av);
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}

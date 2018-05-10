/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 02:26:05 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/23 03:09:02 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "./libft.h"

static void 	print_list(t_list *list_begin)
{
	t_list	*tmp;

	tmp = list_begin;
	printf("\n _____ Main boucle _____ \n\n");
	while (tmp)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
}

int			main(int ac, char **av)
{
	(void)ac;
	(void)av;
	
	void	(*f)(void *);
	int		(*cmp)();
	f = (void (*)(void *))ft_strtoupper;
	cmp = ft_strcmp;

	char	data[] = "Wesh alors\0";
	char	answer[] = "Bolosse\0";
	char	answer2[] = "Je t'emmerde\0";
	char	answer3[] = "Avoue t'es un bolosse\0";
	char	begining[] = "JUL ?\0";
	t_list	*list_begin;

	list_begin = NULL;
	list_begin = ft_create_elem(&data);
	ft_list_push_back(&list_begin, &answer);
	ft_list_push_back(&list_begin, &answer2);
	ft_list_push_back(&list_begin, &answer3);
	ft_list_push_front(&list_begin, &begining);
	printf("J'ai trouve ======= %s\n", 
								ft_list_find(list_begin, answer3, cmp)->data); 

	char	data9[] = "Bonjour\0";
	char	answer9[] = "Enchante\0";
	char	answer29[] = "Plaisir partage\0";
	char	answer39[] = "Que vous etes charmant\0";
	char	begining9[] = "Mr de La Roche Brouchard ?\0";
	t_list	*list_begin9;
//	t_list	*tmp9;

	list_begin9 = NULL;
	list_begin9 = ft_create_elem(&data9);
	ft_list_push_back(&list_begin9, &answer9);
	ft_list_push_back(&list_begin9, &answer29);
	ft_list_push_back(&list_begin9, &answer39);
	ft_list_push_front(&list_begin9, &begining9);

	printf("%d elem dans la llist\n", ft_list_size(list_begin));
	printf("Dernier element = %s\n", ft_list_last(list_begin)->data);

//	ft_list_reverse(&list_begin);
	ft_list_merge(&list_begin, list_begin9);

	ft_list_remove_if(&list_begin, begining9, cmp);
	print_list(list_begin);

	ft_list_sort(&list_begin, cmp);

	print_list(list_begin);

	printf("1eme elem = %p\n", (void *)ft_list_at(list_begin, 6));
	ft_list_clear(&list_begin);

	return (0);
}

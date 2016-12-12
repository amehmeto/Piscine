/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 02:53:12 by amehmeto          #+#    #+#             */
/*   Updated: 2016/08/07 04:26:50 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(int c);

int pointeurs(void)
{
	char a;
	char *ptdr;
	
	a = 'c';
	ptdr = &a;
	ft_putchar(a);
	a = 'f';
	ft_putchar(*ptdr);
	
	char **ptdr2;

	ptdr2 = &ptdr;
	ft_putchar(**ptdr2);

	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 06:24:49 by amehmeto          #+#    #+#             */
/*   Updated: 2016/08/06 11:25:28 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char lettre;

	lettre = 'a';
	while (lettre < 'a' + 26)
	{
		ft_putchar(lettre);
		lettre++;
	}
}

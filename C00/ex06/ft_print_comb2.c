/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 22:59:26 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/12 14:03:27 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher_num(int z)
{
	int		a;

	write(1, " ", 1);
	a = z / 10;
	a = '0' + a;
	write(1, &a, 1);
	a = z % 10;
	a = '0' + a;
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 00;
	j = 01;
	while (i <= 98)
	{
		while (j <= 99)
		{
			if (i != j)
			{
				afficher_num(i);
				afficher_num(j);
				if (i != 98)
					write(1, ",", 1);
				j++;
			}
			else
				j++;
		}
		j = i + 1;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 21:59:30 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/11 08:43:44 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (!(x == '7'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				aff(x, y, z);
				z++;
			}
			y++;
			z = y + 1;
		}
		y = x + 1;
		x++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:54:07 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/24 15:53:13 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr, char *base, int i)
{
	int				j;
	long int		a;

	j = 0;
	a = nbr;
	if (nbr < 0)
	{
		a = -a;
		write(1, "-", 1);
		ft_putnbr((a / i), base, i);
	}
	else if (a >= i)
		ft_putnbr((a / i), base, i);
	j = a % i;
	j = base[j];
	write(1, &j, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		if ((base[i] == 45) || (base[i] == 43) || (base[i] == 32))
			return ;
		if (base[i] >= 9 && base[i] <= 13)
			return;
		i++;
		j = i + 1;
	}
	if ((i == 0) || (i == 1))
		return ;
	ft_putnbr(nbr, base, i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:50:23 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/21 19:22:53 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power <= 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

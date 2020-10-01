/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:14:00 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/21 19:23:39 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power <= 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		if (power > 1)
			return (nb * (ft_recursive_power(nb, power - 1)));
		else
			return (nb);
	}
}

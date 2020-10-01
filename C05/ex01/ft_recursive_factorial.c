/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:23:35 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/21 19:22:36 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		if (nb > 1)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (nb);
	}
}

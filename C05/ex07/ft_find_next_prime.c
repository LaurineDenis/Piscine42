/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:00:02 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/22 12:54:21 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;

	i = nb + 1;
	if ((nb > 2 && nb % 2 == 0) || (nb > 5 && nb % 5 == 0))
		return (ft_find_next_prime(i));
	if ((nb > 3 && nb % 3 == 0) || (nb > 7 && nb % 7 == 0))
		return (ft_find_next_prime(i));
	else if (nb <= 1)
		return (2);
	else
		return (nb);
}

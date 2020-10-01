/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_cerise.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:48:08 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/29 20:03:57 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		*ft_range(int min, int max)
{
	int		*tab;
	long int		size;
	int		y;
	y = 0;
	size = max - min;
	if (min >= max)
	{
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (min < max)
	{
		tab[y] = min;
		y++;
		min++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:52:04 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/30 10:54:01 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long long int		size;
	int					*tab;

	size = 0;
	if (min < max)
		size = max - min;
	else
		return (0);
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (0);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		min++;
		size++;
	}
	return (tab);
}

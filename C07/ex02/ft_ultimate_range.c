/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:59:00 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/30 10:56:32 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	long int		size;

	i = 0;
	size = 0;
	if (min < max)
	{
		size = max - min;
		if (!(range[0] = (int*)malloc(sizeof(int) * size)))
			return (-1);
	}
	else
		range[0] = NULL;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}

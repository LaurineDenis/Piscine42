/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:05:26 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/12 15:39:10 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < size)
	{
		i++;
		size--;
		tmp = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = *(tab + i);
	}
}

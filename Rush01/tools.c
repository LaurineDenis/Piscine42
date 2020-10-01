/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:38:35 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/20 19:48:29 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		**malloc_double_array(int **arr, int size1, int size2)
{
	int i;

	i = 0;
	arr = (int **)malloc(sizeof(int *) * size1); // malloc rows
	if (arr == NULL)
		exit(0);
	while (i < size1)
	{
		arr[i] = (int *)malloc(size2 * sizeof(int));
		if (arr[i] == NULL)
			exit(0);
		i++;
	}
	return (arr);
}

int		*malloc_simple_array(int *array, int size)
{
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		exit(0);
	return (array);
}

void	free_table(int **tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

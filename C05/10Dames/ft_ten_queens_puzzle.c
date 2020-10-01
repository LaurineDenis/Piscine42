/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:40:53 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/22 17:45:02 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		present(int pos, int **grille)
{
	int ligne;
	int colonne;
	int i;
	int j;

	ligne = pos / 9;
	colonne = pos % 9;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (grille[i][j] != 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


int		ft_ten_queens_puzzle(void)
{

}

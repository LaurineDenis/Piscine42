/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   present_line_col.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:59:04 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/20 19:54:15 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		present_ligne(int nbr, int **grid, int ligne)
{
	int col;

	col = 0;
	while (grid[ligne][col])
	{
		if (grid[ligne][col] == nbr)
			return (1);
		col++;
	}
	return (0);
}

int		present_colonne(int nbr, int **grid, int col)
{
	int ligne;

	ligne = 0;
	while (grid[ligne][col])
	{
		if (grid[ligne][col] == nbr)
			return (1);
		ligne++;
	}
	return (0);
}

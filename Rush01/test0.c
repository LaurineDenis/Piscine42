/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:17:23 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/20 19:33:26 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     *catch_grid_borders(char *argv, int index, int limit);
int     present_ligne(int num, int **tab, int ligne_numero);
int     present_colonne(int num, int **tab, int colonne_numero);
int		check_view(int **grid, char *argv);
void    write_rush(int **grid);;

int 	is_finish(int **grid, int pos, char *argv)
{
	int nbr;
	int line;
	int col;

	nbr = 1;
	line = pos / 4;
	col = pos % 4;
	if (pos == 16)
	{
		if (check_view(grid, argv))
			return (1);
		else
			return (0);
	}
	if (grid[line][col] != 0)
	{
		return (is_finish(grid, (pos + 1), argv));
	}
	while (nbr < 5)
	{
		if (!(present_ligne(nbr, grid, line)) && !(present_colonne(nbr, grid, col)))
		{
			grid[line][col] = nbr;
			if (is_finish(grid, (pos + 1), argv))
				return (1);
		}
		nbr++;
	}
	grid[line][col] = 0;
	return (0);
}

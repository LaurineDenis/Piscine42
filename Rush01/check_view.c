/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:56:56 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/20 19:42:54 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		*catch_grid_borders(char *argv, int index, int limit);
int		*malloc_simple_array(int *array, int size);
void	write_rush(int **grid);

int		check_view_col_up(int **grid, int col, int colup)
{
	int ligne;
	int max;
	int view;

	ligne = 0;
	max = grid[ligne][col];
	view = 1;
	while (ligne < 4)
	{
		if (grid[ligne][col] > max)
		{
			max = grid[ligne][col];
			view++;
		}
		ligne++;
	}
	if (colup != view)
		return (0);
	return (1);
}

int		check_view_row_right(int **grid, int ligne, int rowright)
{
	int col;
	int max;
	int view;

	col = 3;
	max = grid[ligne][col];
	view = 1;
	while (col > -1)
	{
		if (grid[ligne][col] > max)
		{
			max = grid[ligne][col];
			view++;
		}
		col--;
	}
	if (rowright != view)
		return (0);
	return (1);
}

int		check_view_row_left(int **grid, int ligne, int rowleft)
{
	int col;
	int max;
	int view;

	col = 0;
	max = grid[ligne][col];
	view = 1;
	while (col < 4)
	{
		if (grid[ligne][col] > max)
		{
			max = grid[ligne][col];
			view++;
		}
		col++;
	}
	if (rowleft != view)
		return (0);
	return (1);
}

int		check_view_col_down(int **grid, int col, int coldown)
{
	int ligne;
	int max;
	int view;

	ligne = 3;
	max = grid[ligne][col];
	view = 1;
	while (ligne > -1)
	{
		if (grid[ligne][col] > max)
		{
			max = grid[ligne][col];
			view++;
		}
		ligne--;
	}
	if (coldown != view)
		return (0);
	return (1);
}

int		check_view(int **grid, char *argv)
{
	int *colup;
	int *coldown;
	int *rowright;
	int *rowleft;
	int ligne;
	int col;

	colup = malloc_simple_array(colup, 4);
	coldown = malloc_simple_array(coldown, 4);
	rowleft = malloc_simple_array(rowleft, 4);
	rowright = malloc_simple_array(rowright, 4);
	colup = catch_grid_borders(argv, 0, 7);
	coldown = catch_grid_borders(argv, 8, 15);
	rowleft = catch_grid_borders(argv, 16, 23);
	rowright = catch_grid_borders(argv, 24, 31);
	ligne = 0;
	while (ligne < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (!((check_view_col_up(grid, col, colup[col])) &&
						(check_view_col_down(grid, col, coldown[col])) &&
						(check_view_row_left(grid, ligne, rowleft[ligne])) &&
						(check_view_row_right(grid, ligne, rowright[ligne]))))
				return (0);
			col++;
		}
		ligne++;
	}
	return (1);
}

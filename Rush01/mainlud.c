/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 13:45:43 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/20 19:52:13 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	debug(char *argv);
int		catch_error(int argc, char **argv);
int		*catch_grid_borders(char *argv, int index, int limit);
void	find_obv_colup(int **grid, int *colup);
void	find_obv_coldown(int **grid, int *coldown);
void	find_obv_rowleft(int **grid, int *rowleft);
void	find_obv_rowright(int **grid, int *rowright);
int		**init_grid(int **grid);
int		*create_int_table(int size);
int		**malloc_double_array(int **arr, int size1, int size2);
int		is_finish(int **grid, int pos, char *argv);
void	write_rush(int **grid);

int		main(int argc, char **argv)
{
	if (catch_error(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	debug(argv[1]);
	// faire fonction free !
	return (0);
}

void	debug(char *argv)
{
	int **grid;

	grid = malloc_double_array(grid, 4, 4);
	init_grid(grid);
	find_obv_colup(grid, catch_grid_borders(argv, 0, 7));
	find_obv_coldown(grid, catch_grid_borders(argv, 8, 15));
	find_obv_rowleft(grid, catch_grid_borders(argv, 16, 23));
	find_obv_rowright(grid, catch_grid_borders(argv, 24, 31));
	is_finish(grid, 0, argv);
	write_rush(grid);
}

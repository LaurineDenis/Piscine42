/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obviouscases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:48:06 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/20 19:43:51 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	find_obv_colup(int **grid, int *colup)
{
	int i;

	i = 0;
	while (colup[i])
	{
		if (colup[i] == 4)
		{
			grid[0][i] = 1;
			grid[1][i] = 2;
			grid[2][i] = 3;
			grid[3][i] = 4;
		}
		if (colup[i] == 1)
			grid[0][i] = 4;
		i++;
	}
}

void	find_obv_coldown(int **grid, int *coldown)
{
	int i;

	i = 0;
	while (coldown[i])
	{
		if (coldown[i] == 4)
		{
			grid[0][i] = 4;
			grid[1][i] = 3;
			grid[2][i] = 2;
			grid[3][i] = 1;
		}
		if (coldown[i] == 1)
			grid[3][i] = 4;
		i++;
	}
}

void	find_obv_rowleft(int **grid, int *rowleft)
{
	int i;

	i = 0;
	while (rowleft[i])
	{
		if (rowleft[i] == 4)
		{
			grid[i][0] = 1;
			grid[i][1] = 2;
			grid[i][2] = 3;
			grid[i][3] = 4;
		}
		if (rowleft[i] == 1)
			grid[i][0] = 4;
		i++;
	}
}

void	find_obv_rowright(int **grid, int *rowright)
{
	int i;

	i = 0;
	while (rowright[i])
	{
		if (rowright[i] == 4)
		{
			grid[i][0] = 4;
			grid[i][1] = 3;
			grid[i][2] = 2;
			grid[i][3] = 1;
		}
		if (rowright[i] == 1)
			grid[i][3] = 4;
		i++;
	}
}

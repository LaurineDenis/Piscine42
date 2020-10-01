/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:36:48 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/20 19:44:37 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str);

int     catch_error(int argc, char **argv)
{
    int i;
    int len;

    if (argc != 2)
        return (1);
    len = ft_strlen(argv[1]);
    if (len != 31)
        return (1);
    i = 0;
    while (argv[1][i])
    {
        if (i % 2 == 0 && !(argv[1][i] >= '1' && argv[1][i] <= '4'))
            return (1);
        if (i % 2 == 1 && argv[1][i] != ' ')
            return (1);
        i++;
    }
    return (0);
}

int     *catch_grid_borders(char *argv, int index, int limit)
{
    int *tab;
    int i;
    int j;

    i = index;
    j = 0;
    tab = malloc(sizeof (int) * 8);
    if (tab == NULL)
        exit(0);
    while (i < limit)
    {
        if (argv[i] != ' ')
        {
            tab[j] = argv[i] - '0';
            j++;
        }
        i++;
    }
    return (tab);
}

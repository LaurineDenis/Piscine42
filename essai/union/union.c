/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:07:48 by ldenis            #+#    #+#             */
/*   Updated: 2020/10/01 12:44:14 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_union(char *s1)
{
	int i;
	int j;

	i = 0;
	while (i < ft_strlen(s1))
	{
		j = i + 1;
		while (j < ft_strlen(s1))
		{
			if (s1[i] == s1[j])
				s1[j] = '\n';
			j++;
		}
		i++;
	}
}

void	ft_union2(char *s1, char *s2)
{
	int i;
	int j;
	int size1;
	int size2;

	i = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	while (i < size1)
	{
		j = 0;
		while (j <= size2)
		{
			if (s1[i] == s2[j])
				s1[i] = '\n';
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int size;

	i = 0;
	k = 0;
	ft_union(argv[1]);
	ft_union(argv[2]);
	size = ft_strlen(argv[1]);
	while (i <= size)
	{
		if (argv[1][i] != '\n')
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	size = ft_strlen(argv[2]);
	i = 0;
	ft_union2(argv[2], argv[1]);
	while (i <= size)
	{
		if (argv[2][i] != '\n')
		{
			write(1, &argv[2][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

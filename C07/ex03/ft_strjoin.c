/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:41:52 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/30 19:57:38 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *string)
{
	unsigned int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int				put_strs(char **strs, char *join, int k, int pos)
{
	int i;

	i = 0;
	while (strs[k][i])
	{
		join[pos] = strs[k][i];
		i++;
		pos++;
	}
	return (pos);
}

int				put_sep(char *sep, char *join, int pos)
{
	int i;

	i = 0;
	while (sep[i])
	{
		join[pos] = sep[i];
		i++;
		pos++;
	}
	return (pos);
}

int				ft_size_join(int size, char **strs, char *sep)
{
	int		i;
	int		taille;

	i = 0;
	taille = 0;
	if (size == 0)
		taille = 1;
	else
	{
		while (i < size)
		{
			taille += ft_strlen(strs[i]) + ft_strlen(sep);
			i++;
		}
		taille = taille - ft_strlen(sep) + 1;
	}
	return (taille);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		nbrsep;
	int		taille;
	char	*join;
	int		pos;

	pos = 0;
	nbrsep = size;
	taille = ft_size_join(size, strs, sep);
	if (!(join = (char*)malloc(sizeof(char) * taille)))
		return (0);
	i = 0;
	while (i < size)
	{
		pos = put_strs(strs, join, i, pos);
		if (--nbrsep > 0)
			pos = put_sep(sep, join, pos);
		i++;
	}
	join[taille - 1] = '\0';
	return (join);
}

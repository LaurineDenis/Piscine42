/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:54:49 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/24 17:50:55 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		in_find_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
				return (i);
		i++;
	}
	return (-1);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] == 45) || (base[i] == 43) || (base[i] == 32))
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		i++;
		j = i + 1;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	ret;
	int size;

	i = 0;
	j = 1;
	ret = 0;
	size = check_base(base);
	if (size < 2)
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			j *= (-1);
		i++;
	}
	while (in_find_base(str[i], base) >= 0)
	{
		ret = ((ret * size) + (in_find_base(str[i], base))); 
		i++;
	}
	return (ret * j);
}

int main (int argc, char **argv)
{
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}

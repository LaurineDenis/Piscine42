/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:38:23 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/25 16:36:19 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*itoa2(int nbr, char *retour, int i)
{
	if (nbr < 0)
	{
		retour[0] = '-';
		nbr = -nbr;
	}
	if (nbr >= 10)
		retour = itoa2(nbr / 10, retour, i - 1);
	retour[i] = (nbr % 10) + 48;
	return (retour);
}

char	*ft_itoa(int nbr)
{
	char	*retour;
	int		i;
	int		a;

	i = 2;
	a = nbr;
	if (nbr < 0)
	{
		i++;
		a = -nbr;
	}
	while (a > 9)
	{
		a = a / 10;
		i++;
		printf("%d\n", i);
	}
	if (!(retour = (char*)malloc(sizeof(char) * i)))
		return (0);
	retour = itoa2(nbr, retour, i - 2);
	retour[i - 1] = '\0';
	return (retour);
}

int main(int argc, char **argv)
{
	printf("%s", ft_itoa(atoi(argv[1])));
	return (0);
}

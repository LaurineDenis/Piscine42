/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:09:42 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/30 10:58:05 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		conteur_malloc(int nbr, int size_base)
{
	int conteur;

	conteur = 0;
	if (nbr < 0)
		conteur++;
	while (nbr != 0)
	{
		nbr /= size_base;
		conteur++;
	}
	return (conteur);
}

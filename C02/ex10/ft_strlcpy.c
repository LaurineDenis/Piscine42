/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:23:38 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/14 16:07:34 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (src[i])
				dest[i] = src[i];
			else
				dest[i] = '\0';
			i++;
		}
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

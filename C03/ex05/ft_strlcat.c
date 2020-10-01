/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:59:46 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/15 15:27:13 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *string)
{
	unsigned int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int tailledest;
	unsigned int taillesrc;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	tailledest = 0;
	j = 0;
	k = size - 1;
	tailledest = ft_strlen(dest);
	taillesrc = ft_strlen(src);
	if (size == 0)
		return (taillesrc);
	i = tailledest - 1;
	while (i++ < k)
		dest[i] = src[j++];
	if (i == k)
		dest[i] = '\0';
	if (size >= tailledest)
		tailledest = tailledest + taillesrc;
	else
		tailledest = taillesrc + size;
	return (tailledest);
}

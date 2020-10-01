/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:30:16 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/14 20:48:17 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	k = i + j + 1;
	j = 0;
	while (i < k)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (i == k)
		dest[i] = '\0';
	return (dest);
}
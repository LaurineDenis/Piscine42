/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:29:45 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/29 09:43:32 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * i);
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	if (str == NULL)
		return (0);
	return (str);
}

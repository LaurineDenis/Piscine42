/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:59:58 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/15 11:22:08 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size;

	size = 0;
	i = 0;
	j = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
		if (j == size)
			return (str + i - j);
	}
	return (0);
}

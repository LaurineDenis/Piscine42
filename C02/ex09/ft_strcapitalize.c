/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:27:28 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/14 19:10:16 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		else
			i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	ft_str_is_strupcase(str);
	if ((str[i] > 96) && (str[i] < 123))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (((str[i] > 31) && (str[i] < 48))
				|| ((str[i] > 57) && (str[i] < 65))
				|| ((str[i] > 90) && (str[i] < 97))
				|| ((str[i] > 122) && (str[i] < 127)))
		{
			if ((str[i + 1] > 96) && (str[i + 1] < 123))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

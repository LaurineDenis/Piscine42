/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_imprimable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:41:44 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/14 19:03:15 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;
	int		j;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			write(1, "\\", 1);
			j = str[i] / 16;
			j = '0' + j;
			write(1, &j, 1);
			j = str[i] % 16;
			write(1, &hex[j], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int 	main(void)
{
	char	str[100] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}

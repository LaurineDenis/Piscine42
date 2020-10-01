/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:04:51 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/21 19:23:58 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index <= 1)
	{
		if (index == 0)
			return (0);
		else if (index == 1)
			return (1);
		else
			return (-1);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

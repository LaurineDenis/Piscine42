/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:22:16 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/30 23:33:10 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_set(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		counter_word(char *str, char *charset)
{
	int		i;
	int		counter;
	int		nbr_set;

	i = 0;
	nbr_set = 0;
	counter = 0;
	while (str[i])
	{
		if (is_set(str[i], charset) != 0)
			counter++;
		else
		{
			if (counter > 0)
			{
				nbr_set++;
				counter = 0;
			}
		}
		i++;
	}
	if (is_set(str[i - 1], charset) != 0)
		nbr_set++;
	return (nbr_set);
}

int		ft_alloc(char *str, char **split, char *charset, int i, int j)
{
	int counter;
	int size;
	size = 0;
	counter = i;
	while (!(is_set(str[counter], charset)) && str[counter])
		counter++;
	size = i - j;
	split[j] = malloc(sizeof(char) * (size + 1));
	ft_strncpy(split[j], &str[i], counter);
	j++;
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = 0;
	counter = 0;
	if (!(split = (char**)malloc(sizeof(char*) * (counter_word(str, charset) + 1))))
		return (0);
	while (str[i])
	{
		while (!(is_set(str[i], charset)) && str[i])
			i++;
		j = ft_alloc(str, split, charset, i, j);
		while (!(is_set(str[i], charset)) && str[i])
			i++;
	}
	printf("abcdef\n");
	while (is_set(str[i - 1], charset) != 0 && counter != 0)
		j = ft_alloc(str, split, charset, i, j);
	printf("abcdef\n");
	split[j] = 0;
	return (split);
}

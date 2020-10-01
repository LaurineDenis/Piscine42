/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 09:42:21 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/27 23:38:31 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_size_c(int *line_count)
{
	int 	fd;
	int 	j;
	int 	x;
	char 	buffer;

	x = 0;
	j = 0;
	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
		return(0);
	while (read(fd, &buffer, 1) > 0)
	{
		if(buffer == '\n')
		{
			*line_count = *line_count + 1;
			if (j > x)
				x = j;
			j = 0;
		}
		else
			j++;
	}
	if (close(fd) == -1)
		return (0);
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ret;
	int		len;

	len = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ret = dest;
	while (*src)
		*ret++ = *src++;
	*ret = '\0';
	return (dest);
}

char	**make_tab(char **tab, char *stock)
{
	int		i;
	int		j;
	int		fd;
	char	c;

	i = 0;
	j = 0;
	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
		{
			stock[i] = '\0';
			tab[j] = ft_strdup(stock);
			j++;
			i = 0;
		}
		else
		{
			stock[i] = c;
			i++;
		}
	}
	close(fd);
	return (tab);
}
int		verif_fdic(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j] >= '0' && tab[i][j] <= '9')
			j++;
		while (tab[i][j] == ' ')
			j++;
		if (tab[i][j] == ':')
			j++;
		else
			return (0);
		while (tab[i][j] == ' ')
			j++;
		while (tab[i][j] > 31 && tab[i][j] <= 126)
			j++;
		if (tab[i][j] != '\0')
			return (0);
		i++;
		j = 0;
	}
	return (1);
}

void	verif_fdic_2(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (tab[i][j] < '0' || tab[i][j] > '9')
			return ;
		i++;
	}
	verif_fdic(tab);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_aff_l(char *str)
{
	char b;
	int a;

	a = 0;
	while(str[a] >= '0' && str[a] <= '9')
		a++;
	if (str[a] == ':')
		a += 2;
	while((str[a] >= 'a' && str[a] <= 'z') && str[a] != '\0')
	{
		b = str[a];
		write(1, &b, 1);
		a++;
	}
	write(1, " ", 1);
}

void	find_number(char **tab, char *str, int n)
{
	int i;

	i = 0;
	while(ft_strncmp(tab[i], str, n) != 0)
		i++;
	ft_aff_l(tab[i]);
}

int		ft_atoi(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		ret = ((ret * 10) + str[i]) - '0';
		i++;
	}
	return (ret);
}

char	*ft_itoa2(int nbr, char *retour, int i)
{
	if (nbr < 0)
	{
		retour[0] = '-';
		nbr = -nbr;
	}
	if (nbr >= 10)
		retour = ft_itoa2(nbr / 10, retour, i - 1);
	retour[i] = (nbr % 10) + 48;
	return (retour);
}

char	*ft_itoa(int nbr)
{
	char	*retour;
	int		i;
	int		a;

	i = 2;
	a = nbr;
	if (nbr < 0)
	{
		i++;
		a = -nbr;
	}
	while (a > 9)
	{
		a = a / 10;
		i++;
	}
	if (!(retour = (char*)malloc(sizeof(char) * i)))
		return (0);
	retour = ft_itoa2(nbr, retour, i - 2);
	retour[i - 1] = '\0';
	return (retour);
}

void	counter_2(int size, char **tab)
{
	if (size > 21 && size < 25)
		find_number(tab, "1000000000000000000000", ft_strlen("1000000000000000000000"));
	else if (size > 24 && size < 28)
		find_number(tab, "1000000000000000000000000", ft_strlen("1000000000000000000000000"));
	else if (size > 27 && size < 31)
		find_number(tab, "1000000000000000000000000000", ft_strlen("1000000000000000000000000000"));	
	else if (size > 30 && size < 34)
		find_number(tab, "1000000000000000000000000000000", ft_strlen("1000000000000000000000000000000"));
	else if (size > 33 && size < 37)
		find_number(tab, "1000000000000000000000000000000000",ft_strlen("1000000000000000000000000000000000"));
	else
		find_number(tab, "1000000000000000000000000000000000000", ft_strlen("1000000000000000000000000000000000000"));

}

void	counter(int size, char **tab)
{
	if (size < 4)
		find_number(tab, "100", ft_strlen("100"));
	else if (size > 3 && size < 7)
		find_number(tab, "1000", ft_strlen("1000"));
	else if (size > 6 && size < 10)
		find_number(tab, "1000000", ft_strlen("1000000"));
	else if (size > 9 && size < 13)
		find_number(tab, "1000000000", ft_strlen("1000000000"));
	else if (size > 12 && size < 16)
		find_number(tab, "1000000000000", ft_strlen("1000000000000"));
	else if (size > 15 && size < 19)
		find_number(tab, "1000000000000000", ft_strlen("1000000000000000"));
	else if (size > 18 && size < 22)
		find_number(tab, "1000000000000000000", ft_strlen("1000000000000000000"));
	else
		counter_2(size, tab);
}

void	cut_number_1(char *argv, char **tab)
{
	int		size_nbr;
	int		new_nbr;
	int		tmp;

	size_nbr = ft_strlen(argv);
	new_nbr = ft_atoi(argv);
	if (new_nbr <= 20)
		find_number(tab, ft_itoa(new_nbr), size_nbr);
	else if (new_nbr < 100)
	{
		tmp = new_nbr - (new_nbr % 10);
		find_number(tab, ft_itoa(tmp), 2);
		cut_number_1(ft_itoa(new_nbr % 10), tab);
	}
	else
	{
		tmp = new_nbr - (new_nbr % 100);
		find_number(tab, ft_itoa(tmp / 100), 1);
		counter(size_nbr, tab);
		cut_number_1(ft_itoa(new_nbr % 100), tab);
	}
}

void	cut_number_2(char *argv, char **tab)
{
	int		size_nbr;
	int		new_nbr;
	int		tmp;
	char	*number;
	int		size_2;

	size_nbr = ft_strlen(argv);
	new_nbr = ft_atoi(argv);
	if (size_nbr < 4)
		cut_number_1(argv, tab);
	else
	{
		tmp = new_nbr - (new_nbr % 1000);
		number = ft_itoa(tmp / 1000);
		size_2 = ft_strlen(number);
		cut_number_2(number, tab);
		number = ft_itoa(new_nbr % 1000);
		cut_number_2(number, tab);
	}
}

int main(int argc, char **argv)
{
	char	**tab;
	char	*stock;
	int		sizec;
	int		i;
	int		line_count;

	(void)argc;
	i = 0;
	line_count = 1;
	sizec = ft_size_c(&line_count);
	if (!(stock = (char*)malloc(sizeof(char) * sizec + 1)))
		return (0);
	tab = (char**)malloc(sizeof(char*) * line_count);
	tab = make_tab(tab, stock);
	free(stock);
	cut_number_2(argv[1], tab);
	free(tab);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:02:52 by haliu             #+#    #+#             */
/*   Updated: 2024/02/12 11:13:53 by haliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_put_pos_num(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		ft_put_pos_num(-num);
	}
	if (num >= 10)
	{
		ft_put_pos_num(num / 10);
		ft_put_pos_num(num % 10);
	}
	else
		ft_putchar(num + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_put_pos_num(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		length;
	char	*dup;

	i = 0;
	length = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * length + 1);
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	i = 0;
	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock_str))
		return (NULL);
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i].size = 0;
	stock_str[i].str = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}

int	main(int argc, char **argv)
{
	t_stock_str	*par;
	par = ft_strs_to_tab(argc, argv);
	ft_show_tab(par);
	return (0);
}
*/

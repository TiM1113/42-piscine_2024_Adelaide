/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:30:22 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:46:33 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int		counter;
	char	c;
	char	*line;

	line = str;
	counter = 0;
	c = line[counter];
	while (c != '\0')
	{
		write(1, &c, 1);
		counter++;
		c = line[counter];
	}
}

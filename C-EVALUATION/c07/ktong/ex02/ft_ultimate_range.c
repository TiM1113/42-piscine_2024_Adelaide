/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:24:06 by ktong             #+#    #+#             */
/*   Updated: 2024/02/12 17:07:03 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;

	count = 0;
	range[0] = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (range == NULL)
		return (-1);
	while (max > min)
	{
		range[0][count] = min;
		min++;
		count++;
	}
	return (max - min);
}

int	main(void)
{
	int	*tab[3];
	int	count;
	int	min;
	int	max;
	int	size;

	min = 0;
	max = 5;
	size = max - min;
	count = 0;
	ft_ultimate_range(tab, min, max);
	while (count < size)
	{
		printf("%d\n", tab[0][count]);
		count ++;
	}
	return (0);
}


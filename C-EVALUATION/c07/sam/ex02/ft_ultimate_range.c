/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:06:30 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/06 22:06:31 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		count;

	count = 0;
	if (min >= max)
	{
		(*range) = malloc(0);
		range[0] = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof (max));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[count] = min++;
		count++;
	}
	return (max - min);
}

/*
int	main(int argc, char *argv[])
{
	int		**tab;
	int		count;
	int		i;

	i = 0;
	tab = malloc(10);
	count = ft_ultimate_range(tab, atoi(argv[1]), atoi(argv[2]));
	printf("Count : %d\n", count);
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d, ", (*tab)[i]);
		i++;
	}
	return (argc);
}
*/
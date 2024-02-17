/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:46:15 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/06 19:46:17 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*result;
	int		count;

	count = 0;
	if (min >= max)
	{
		result = malloc(0);
		return (result);
	}
	result = malloc((max - min) * sizeof (max));
	while (min < max)
	{
		result[count] = min;
		min++;
		count++;
	}
	return (result);
}

/*
int	main(int argc, char *argv[])
{
	int		*tab;
	int		count;

	count = 0;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (count < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d, ", tab[count]);
		count++;
	}
	return (argc);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:09:01 by xiali             #+#    #+#             */
/*   Updated: 2024/02/13 18:11:52 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = 0;
		}
		else
			count++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	array[] = {3, 1, 4, 9, 5};
	int size = 5;
	printf ("Original int array: \n");

	int i = 0;
	while(i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}

	ft_sort_int_tab(array, size);
	printf("Sorted int array: \n");
	int j = 0;
	while (j < size)
	{
		printf("%d\n", array[j]);
		j++;
	}
	return (0);
}


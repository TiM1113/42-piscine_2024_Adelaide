/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:28:05 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:12:08 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = [tab[j + 1]];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int arr2[] = {5, 3, 1, 4, 2};
int size2 = sizeof(arr2) / sizeof(arr2[0]);
printf("Array before sorting: ");
for (int i = 0; i < size2; i++)
printf("%d ", arr2[i]);
printf("\n");
ft_sort_int_tab(arr2, size2);
printf("Array after sorting: ");
for (int i = 0; i < size2; i++)
printf("%d ", arr2[i]);
printf("\n");
return 0;
}
*/

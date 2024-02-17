/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:53:59 by xiali             #+#    #+#             */
/*   Updated: 2024/02/13 18:05:03 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	reindex;
	int	temp;

	index = 0;
	reindex = size - 1;
	while (index < reindex)
	{
		temp = tab[index];
		tab[index] = tab[reindex];
		tab[reindex] = temp;
		index++;
		reindex--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	array[] = {1, 3, 4, 5, 9};
	int size = 5;
	printf ("Original int array: \n");
	
	int i = 0;
	while(i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	
	ft_rev_int_tab(array, size);
	printf("Reversed int array: \n");
	int j = 0;
	while (j < size)
	{
		printf("%d\n", array[j]);
		j++;
	}
	return (0);
}


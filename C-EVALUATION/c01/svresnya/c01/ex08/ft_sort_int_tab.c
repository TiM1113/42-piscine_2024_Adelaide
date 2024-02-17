/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:54:36 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:47:57 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

//for each number in array
//go through array once, float up biggest number to size-1
//go through array twice, float up second biggest number to size -2
//go through array thrice,float up third  biggest number to size -3
//...
//when number is at size-size, finished. 
void	ft_sort_int_tab(int *tab, int size)
{
	int	travel_idx;
	int	largest_idx;
	int	roof_idx;

	travel_idx = 0;
	largest_idx = 0;
	roof_idx = size - 1;
	while (roof_idx >= 0)
	{
		while (travel_idx <= roof_idx)
		{
			if (tab[travel_idx] > tab[largest_idx])
			{
				largest_idx = travel_idx;
			}
			travel_idx++;
		}
		ft_swap(&tab[largest_idx], &tab[roof_idx]);
		roof_idx--;
		travel_idx = 0;
		largest_idx = 0;
	}
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

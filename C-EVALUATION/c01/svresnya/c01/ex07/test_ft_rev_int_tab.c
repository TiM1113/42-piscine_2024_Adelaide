/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:47:11 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/01 16:41:15 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	print_arr(int *arr, int len);
void	more_tests(void);

int	main(void)
{
	int	tablet1[] = {0, 2, 3, 6, 378, 1};
	int	tablet2[] = {0};
	int	tablet6[] = {42, 0, 2, 3};

	printf("An even array: ");
	print_arr(tablet1, 6);
	printf("\nReverse even array: ");
	ft_rev_int_tab(tablet1, 6);
	print_arr(tablet1, 6);
	printf("\nA single-item array: ");
	print_arr(tablet2, 1);
	printf("\nReverse single-item array: ");
	ft_rev_int_tab(tablet2, 1);
	print_arr(tablet2, 1);
	printf("\nAn even array: ");
	print_arr(tablet6, 4);
	printf("\nReverse even array: ");
	ft_rev_int_tab(tablet6, 4);
	print_arr(tablet6, 4);
	more_tests();
}

void	print_arr(int *arr, int len)
{
	int	i;

	i = 0;
	printf("[ ");
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("]");
}

void	more_tests(void)
{
	int	tablet3[] = {3, 1024, 0};
	int	tablet4[] = {1, 2};
	int	tablet5[] = {};
	int	tablet8[] = {15, 0, -2, 31, 10000};

	printf("\nA short odd array: ");
	print_arr(tablet3, 3);
	printf("\nReverse short odd array: ");
	ft_rev_int_tab(tablet3, 3);
	print_arr(tablet3, 3);
	printf("\nA short even array: ");
	print_arr(tablet4, 2);
	printf("\nReverse short even array: ");
	ft_rev_int_tab(tablet4, 2);
	print_arr(tablet4, 2);
	printf("\nAn empty array: ");
	print_arr(tablet5, 0);
	printf("\nReverse empty array: ");
	ft_rev_int_tab(tablet5, 0);
	print_arr(tablet5, 0);
	printf("\nAn odd array: ");
	print_arr(tablet8, 5);
	printf("\nReverse odd array: ");
	ft_rev_int_tab(tablet8, 5);
	print_arr(tablet8, 5);
}

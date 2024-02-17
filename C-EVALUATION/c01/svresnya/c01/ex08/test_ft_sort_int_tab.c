/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:55:13 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:48:04 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	print_arr(int *arr, int len);
void	ft_putstring(char *str);
void	ft_putchar(char letter);

int	main(void)
{
	int	tablet12[] = {10, 0, 22, 2};
	ft_putstring("An array: ");
	print_arr(tablet12, 4);
	ft_putstring("Sorted array: ");
	ft_sort_int_tab(tablet12, 4);
	print_arr(tablet12, 4);
	int	tablet1[] = {10, 0, 22, 3, 6, 378, 6, 1};
	ft_putstring("An array: ");
	print_arr(tablet1, 8);
	ft_putstring("Sorted array: ");
	ft_sort_int_tab(tablet1, 8);
	print_arr(tablet1, 8);
	int	tablet2[] = {0};
	ft_putstring("An array: ");
	print_arr(tablet2, 1);
	ft_putstring("Sorted array: ");
	ft_sort_int_tab(tablet2, 1);
	print_arr(tablet2, 1);
	int	tablet3[] = {0, 1024, 0};
	ft_putstring("An array: ");
	print_arr(tablet3, 3);
	ft_putstring("Sorted array: ");
	ft_sort_int_tab(tablet3, 3);
	print_arr(tablet3, 3);
	int	tablet4[] = {1, 2};
	ft_putstring("An already sorted array: ");
	print_arr(tablet4, 2);
	ft_putstring("Re-sorted array: ");
	ft_sort_int_tab(tablet4, 2);
	print_arr(tablet4, 2);
	int	tablet5[] = {};
	ft_putstring("An empty array: ");
	print_arr(tablet5, 0);
	ft_putstring("Sorted empty array: ");
	ft_sort_int_tab(tablet5, 0);
	print_arr(tablet5, 0);
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
	printf("\n");
}

void	ft_putstring(char *str)
{
	int		idx;
	char	let;

	idx = 0;
	let = str[idx];
	while (let != '\0')
	{
		ft_putchar(let);
		idx++;
		let = str[idx];
	}
}

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

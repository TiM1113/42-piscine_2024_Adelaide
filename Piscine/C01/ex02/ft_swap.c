/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:48:24 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/01 11:49:51 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/
void	ft_swap(int *a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int x;	

	x = 5;
	int y;	

	y = 23;
	printf("%d,%d,\n", x, y);
	ft_swap(&x, &y);
	printf("%d,%d,\n", x, y);
}
*/

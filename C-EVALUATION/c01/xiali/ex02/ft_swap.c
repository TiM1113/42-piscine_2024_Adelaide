/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:24:29 by xiali             #+#    #+#             */
/*   Updated: 2024/01/28 18:44:07 by xiali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tempnum;

	tempnum = *a;
	*a = *b;
	*b = tempnum;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 22;
	b = 33;
	printf("Before swapping:\n");
	printf("Value of a is:%d\n", a);
	printf("Value of b is:%d\n", b);
	ft_swap(&a, &b);
	printf("After swapping:\n");
	printf("Value of a is:%d\n", a);
	printf("Value of b is:%d", b);
	return (0);
}
*/

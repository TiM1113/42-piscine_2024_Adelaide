/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:54:32 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/01 11:50:54 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int		x;
	int		y;

	x = 13;
	y = 4;
	printf("\n %d dividd by %d:", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("\n The quotient is: %d", x);
	printf("\n The remainder is: %d\n", y);
}
*/

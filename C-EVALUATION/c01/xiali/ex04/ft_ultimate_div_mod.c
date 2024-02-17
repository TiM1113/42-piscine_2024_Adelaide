/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:06:27 by xiali             #+#    #+#             */
/*   Updated: 2024/01/30 10:18:12 by xiali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 4;
	printf("a is 13, b is 4\n");
	ft_ultimate_div_mod(&a, &b);
	printf("a stores the result of the division, now is: %d\n", a);
	printf("b stores the remainder, now is %d\n", b);
	return (0);
}
*/

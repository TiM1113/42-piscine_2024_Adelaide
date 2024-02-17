/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:12:23 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/01 11:50:24 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int		division;
	int		modulus;
	int		test1;
	int		test2;

	test1 = 77;
	test2 = 8;
	ft_div_mod(test1, test2, &division, &modulus);
	printf("\n %d dividd by %d:", test1, test2);
	printf("\n The quotient is: %d", division);
	printf("\n The remainder is: %d\n", modulus);
}
*/

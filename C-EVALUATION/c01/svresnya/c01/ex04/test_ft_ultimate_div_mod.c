/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_ultimate_div_mod.c                  :+:    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:22:48 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:46:21 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	nom;
	int	denom;

	nom = 1504;
	denom = 100;
	printf("When dividing %d by %d you get ", nom, denom);
	ft_ultimate_div_mod(&nom, &denom);
	printf("%d and a remainder of %d..\n", nom, denom);
	nom = 0;
	denom = 5;
	printf("When dividing %d by %d you get ", nom, denom);
	ft_ultimate_div_mod(&nom, &denom);
	printf("%d and a remainder of %d..\n", nom, denom);
	nom = 20;
	denom = 2;
	printf("When dividing %d by %d you get ", nom, denom);
	ft_ultimate_div_mod(&nom, &denom);
	printf("%d and a remainder of %d..\n", nom, denom);
	nom = 7;
	denom = 0;
	printf("When dividing %d by %d you get a division by zero: \n", nom, denom);
	printf("You must!.. but not without a buffer-clearing newline above.");
	printf("\nand here, or that phrase is not printed :(\n");
	ft_ultimate_div_mod(&nom, &denom);
	printf("%d and a remainder of %d..\n", nom, denom);
}

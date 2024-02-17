/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:27:32 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/29 18:58:38 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	more_tests(void);

int	main( void )
{
	int	nom;
	int	denom;
	int	res;
	int	rem;

	nom = 1504;
	denom = 100;
	ft_div_mod(nom, denom, &res, &rem);
	printf("When dividing %d by %d you get %d and a remainder of %d..\n",
		nom, denom, res, rem);
	nom = 0;
	denom = 5;
	ft_div_mod(nom, denom, &res, &rem);
	printf("When dividing %d by %d you get %d and a remainder of %d..\n",
		nom, denom, res, rem);
	nom = 20;
	denom = 2;
	ft_div_mod(nom, denom, &res, &rem);
	printf("When dividing %d by %d you get %d and a remainder of %d..\n",
		nom, denom, res, rem);
	more_tests();
}

void	more_tests(void)
{
	int	nom;
	int	denom;
	int	res;
	int	rem;

	nom = 7;
	denom = 0;
	printf("When dividing %d by %d you get a division by zero crash:\n",
		nom, denom);
	ft_div_mod(nom, denom, &res, &rem);
	printf("When dividing %d by %d you somehow got %d and a remainder of %d!\n",
		nom, denom, res, rem);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:12:34 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:05:09 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		d;
	int		m;

	m = a % b;
	d = a / b;
	div = &d;
	mod = &m;
}
/*
#include <stdio.h>
int main()
{
    int div, mod;
    printf("Before ft_div_mod: a=10, b=3\n");
    ft_div_mod(10, 3, &div, &mod);
    printf("After ft_div_mod: div=%d, mod=%d\n", div, mod);
}
*/

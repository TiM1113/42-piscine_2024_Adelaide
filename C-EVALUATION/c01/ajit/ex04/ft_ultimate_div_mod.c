/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:15:16 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:07:44 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int main()
{
    int a2 = 10, b2 = 3;
    printf("Before ft_ultimate_div_mod: a=%d, b=%d\n", a2, b2);
    ft_ultimate_div_mod(&a2, &b2);
    printf("After ft_ultimate_div_mod: a=%d, b=%d\n", a2, b2);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div.mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:24:28 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/02 21:01:17 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*int main (void)
{
	int a;
	int b;

	a = 5;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("result of a by b %d\n", a);
	printf("remainder of a by b %d\n", b);
	return (0);
}*/

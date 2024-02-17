/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:34:39 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/02 20:18:15 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main (void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	
	ft_div_mod(a, b, &div, &mod);
	printf("result of a by b %d\n", div);
	printf("remainder of a by b %d\n", mod);
	return (0);
}*/

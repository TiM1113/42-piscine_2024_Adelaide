/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:47:57 by xiali             #+#    #+#             */
/*   Updated: 2024/01/30 10:16:51 by xiali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 13;
	int	b = 2;
	int	div;
	int	mod;

	printf ("a is 13, b is 2\n");
	ft_div_mod (a, b, &div, &mod);
	printf ("result of a/b is %d\n", div);
	printf ("remainder of a/b is %d\n", mod);
	return (0);
}
*/

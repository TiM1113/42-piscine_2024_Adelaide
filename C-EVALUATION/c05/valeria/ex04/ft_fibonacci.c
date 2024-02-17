/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:47:47 by vmorales          #+#    #+#             */
/*   Updated: 2024/02/12 13:32:27 by vmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (nb);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:15:46 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/13 11:53:24 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		res = res * nb;
	return (res);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int res;

    res = ft_iterative_power(2, 3);
    printf("2 raised to the power of 3 is %d\n", res);

    res = ft_iterative_power(5, 0);
    printf("5 raised to the power of 0 is %d\n", res);

    res = ft_iterative_power(-3, 4);
    printf("-3 raised to the power of 4 is %d\n", res);
 
    res = ft_iterative_power(4, -2);
    printf("4 raised to the power of -2 is %d\n", res);

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:53:59 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/09 22:58:21 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int num;

	num = nb;
	if (num > num * nb)
		return (0);
	else if (power > 1)
		return (num * ft_recursive_power(num, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (num);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int result;

    // Test case 1: nb = 2, power = 3
    result = ft_recursive_power(2, 3);
    printf("2 raised to the power of 3 is %d\n", result);

    // Test case 2: nb = 5, power = 0
    result = ft_recursive_power(5, 0);
    printf("5 raised to the power of 0 is %d\n", result);

    // Test case 3: nb = -3, power = 4
    result = ft_recursive_power(-3, 4);
    printf("-3 raised to the power of 4 is %d\n", result);

    // Test case 4: nb = 4, power = -2
    result = ft_recursive_power(4, -2);
    printf("4 raised to the power of -2 is %d\n", result);

    return 0;
}
*/

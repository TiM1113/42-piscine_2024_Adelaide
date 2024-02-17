/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:16:15 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/13 13:16:17 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int result;

    result = ft_recursive_power(2, 3);
    printf("2 raised to the power of 3 is %d\n", result);

    result = ft_recursive_power(5, 0);
    printf("5 raised to the power of 0 is %d\n", result);

    result = ft_recursive_power(-3, 4);
    printf("-3 raised to the power of 4 is %d\n", result);

     result = ft_recursive_power(4, -2);
    printf("4 raised to the power of -2 is %d\n", result);

    return 0;
}
*/

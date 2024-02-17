/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:15:18 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/12 14:03:59 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int result;

    // nb = 5
    result = ft_recursive_factorial(5);
    printf("Factorial of 5 is %d\n", result);

    // nb = 0
    result = ft_recursive_factorial(0);
    printf("Factorial of 0 is %d\n", result);

    // nb = -3
    result = ft_recursive_factorial(-3);
    printf("Factorial of -3 is %d\n", result);

    return 0;
}
*/

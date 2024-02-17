/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:15:59 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/09 22:42:08 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb -1;
	}
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int nb = 5;

    int result = ft_iterative_factorial(nb);

    printf("The factorial of %d is %d\n", nb, result); // 打印结果

    return 0;	
}
*/

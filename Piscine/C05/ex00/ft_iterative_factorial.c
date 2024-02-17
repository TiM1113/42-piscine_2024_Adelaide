/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:14 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/13 11:32:31 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb = nb -1;
	}
	return (res);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int nb = 5;

    int res = ft_iterative_factorial(nb);

    printf("The factorial of %d is %d\n", nb, res); // 打印结果

    return 0;	
}
*/

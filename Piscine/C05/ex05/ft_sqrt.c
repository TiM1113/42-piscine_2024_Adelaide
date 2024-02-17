/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:17:25 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/13 16:27:44 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int nb;
    int result;
	
	nb = 21040569;
    result = ft_sqrt(nb);
    printf("Square root of %d is %d\n", nb, result);

	nb = 64;
    result = ft_sqrt(nb);
    printf("Square root of %d is %d\n", nb, result);

	nb = 0;
    result = ft_sqrt(nb);
    printf("Square root of %d is %d\n", nb, result);

    return 0;
}
*/

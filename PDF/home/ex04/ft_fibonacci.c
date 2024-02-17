/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:00:44 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/09 23:20:50 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index > 1)
	{
		result = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
		return (result);
	}
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int index;
    int result;

   
    index = 5;
    result = ft_fibonacci(index);
    printf("Fibonacci number at index %d is %d\n", index, result);

    
    index = 0;
    result = ft_fibonacci(index);
    printf("Fibonacci number at index %d is %d\n", index, result);

   
    index = -3;
    result = ft_fibonacci(index);
    printf("Fibonacci number at index %d is %d\n", index, result);

    return 0;
}
*/

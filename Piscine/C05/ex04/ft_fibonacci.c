/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:16:58 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/13 17:22:29 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		result = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
		return (result);
	}
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int index;
    int result;

   
    index = 15;
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

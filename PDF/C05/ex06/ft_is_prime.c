/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:17:47 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/11 11:40:00 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb < 2)
		return (0);
	else
		return (1);
}


#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int num;
    int result;

  
    num = 5;
    result = ft_is_prime(num);
    if (result == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

   
    num = 10;
    result = ft_is_prime(num);
    if (result == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

  
    num = 17;
    result = ft_is_prime(num);
    if (result == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}


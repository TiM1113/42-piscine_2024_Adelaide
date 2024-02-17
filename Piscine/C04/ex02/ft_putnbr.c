/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:36:51 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/10 10:47:01 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = (-1) * nb;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}
/*
int main(void)
{
	printf("Test number: ");
	fflush(stdout);
	printf("\n");
	ft_putnbr(34556);
	printf("\n");

	ft_putnbr(-2147483648);
	printf("\n");

	ft_putnbr(2147483647);
	printf("\n");

	return (0);
}
*/

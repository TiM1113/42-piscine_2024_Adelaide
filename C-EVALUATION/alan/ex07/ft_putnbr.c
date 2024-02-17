/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:16:07 by myip              #+#    #+#             */
/*   Updated: 2024/01/31 14:37:45 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int nb, int divident)
{
	ft_putchar((char)(nb / divident + 48));
	if (divident >= 10)
	{
		ft_print_num(nb % divident, divident / 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if ((nb / 1000000000) > 0)
		ft_print_num(nb, 1000000000);
	else if ((nb / 100000000) > 0)
		ft_print_num(nb, 100000000);
	else if ((nb / 10000000) > 0)
		ft_print_num(nb, 10000000);
	else if ((nb / 1000000) > 0)
		ft_print_num(nb, 1000000);
	else if ((nb / 100000) > 0)
		ft_print_num(nb, 100000);
	else if ((nb / 10000) > 0)
		ft_print_num(nb, 10000);
	else if ((nb / 1000) > 0)
		ft_print_num(nb, 1000);
	else if ((nb / 100) > 0)
		ft_print_num(nb, 100);
	else if ((nb / 10) > 0)
		ft_print_num(nb, 10);
	else
		ft_putchar(nb + 48);
}


int	main(void)
{
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(23);
	ft_putchar('\n');
	ft_putnbr(345);
	ft_putchar('\n');
	ft_putnbr(4567);
	ft_putchar('\n');
	ft_putnbr(56789);
	ft_putchar('\n');
	ft_putnbr(678901);
	ft_putchar('\n');
	ft_putnbr(7890123);
	ft_putchar('\n');
	ft_putnbr(89012345);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	return(0);
}


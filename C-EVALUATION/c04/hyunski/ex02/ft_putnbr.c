/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:04:57 by hyunski2          #+#    #+#             */
/*   Updated: 2024/02/12 14:55:05 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	call_number(int nb, char *number)
{
	int	n;

	n = 0;
	while (nb > 0)
	{
		number[n] = nb % 10 + '0';
		nb /= 10;
		n ++;
	}
	return (n - 1);
}

void	operator(int nb)
{
	char	number[11];
	int		n;

	if (nb > 0)
	{
		n = call_number(nb, number);
		while (n != '\0')
		{
			write(1, &number[n], 1);
			n --;
		}
		write(1, &number[0], 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		n = call_number(nb, number) + 1;
		number[n] = '-';
		while (n != '\0')
		{
			write(1, &number[n], 1);
			n --;
		}
		write(1, &number[0], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0 || nb == '\0')
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		operator(nb);
}

int	main(void)
{
	int	a;

	a = -2147483648;
	ft_putnbr(a);
}

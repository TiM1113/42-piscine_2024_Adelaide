/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:31:30 by myip              #+#    #+#             */
/*   Updated: 2024/01/31 14:35:00 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int n)
{
	int	ans;

	if (n < 10)
	{
		n = n + 48;
		ft_putchar('0');
		ft_putchar((char)n);
	}
	else
	{
		ans = n / 10 + 48;
		ft_putchar((char)ans);
		ans = n % 10 + 48;
		ft_putchar((char)ans);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_num(x);
			ft_putchar(' ');
			ft_print_num(y);
			if ((x == 98) && (y == 99))
				break ;
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}


int	main(void)
{
	ft_print_comb2();
	return(0);
}


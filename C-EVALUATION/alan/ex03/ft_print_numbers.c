/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:31:09 by myip              #+#    #+#             */
/*   Updated: 2024/01/31 14:24:34 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x < 58)
	{
		write(1, &x, 1);
		x++;
	}
}


int	main(void)
{
	ft_print_numbers();
}


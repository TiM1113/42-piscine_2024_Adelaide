/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:45:32 by tiyuan            #+#    #+#             */
/*   Updated: 2024/01/29 20:21:59 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '0' ;
	while (num <= '9')
	{
		write(1, &num, 1);
		++num;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

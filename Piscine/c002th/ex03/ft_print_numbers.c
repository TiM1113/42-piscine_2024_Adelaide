/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:39:16 by tiyuan            #+#    #+#             */
/*   Updated: 2024/01/29 20:44:57 by tiyuan           ###   ########.fr       */
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

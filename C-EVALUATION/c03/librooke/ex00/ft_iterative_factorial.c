/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librooke <librooke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:51:36 by librooke          #+#    #+#             */
/*   Updated: 2024/02/08 14:55:18 by librooke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb > 0)
		total *= nb--;
	return (total);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%i", ft_iterative_factorial(atoi(argv[1])));
	}
}
*/
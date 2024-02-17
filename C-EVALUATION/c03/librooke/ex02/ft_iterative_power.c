/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librooke <librooke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:35:40 by librooke          #+#    #+#             */
/*   Updated: 2024/01/31 14:41:20 by librooke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tomul;

	tomul = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power-- > 1)
		nb *= tomul;
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%i", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	}
}
*/
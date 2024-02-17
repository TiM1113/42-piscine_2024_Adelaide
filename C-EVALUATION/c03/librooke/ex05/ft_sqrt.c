/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librooke <librooke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:38:51 by librooke          #+#    #+#             */
/*   Updated: 2024/02/13 11:39:17 by librooke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt < nb / sqrt)
		++sqrt;
	if (sqrt == nb / sqrt)
		return (sqrt);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%i", ft_sqrt(atoi(argv[1])));
	}
}
*/
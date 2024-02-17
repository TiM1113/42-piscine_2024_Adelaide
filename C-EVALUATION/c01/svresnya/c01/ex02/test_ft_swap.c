/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:22:15 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/29 18:51:47 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int		y;
	int		m;
	int		*you;
	int		*me;

	y = 1504;
	m = 1241;
	you = &y;
	me = &m;
	printf("I was born %d, you were %d...\n", *me, *you);
	ft_swap(you, me);
	printf("After a moment I am %d, while you became %d.\n",*me, *you);
}

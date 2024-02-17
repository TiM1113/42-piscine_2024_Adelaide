/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:09:59 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/29 18:05:39 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;
	int	*me;

	i = 27;
	me = &i;
	printf("I was born %d, ", i);
	printf("yes, with a link of %p to %d...\n...", me, *me);
	ft_ft(me);
	printf("but after a moment I am %d, ", i);
	printf("a link of %p to %d.\n", me, *me);
}

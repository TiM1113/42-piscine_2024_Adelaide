/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_ft.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:17:45 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/29 19:00:24 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	me;
	int	*ptr1me;
	int	**ptr2me;
	int	***ptr3me;
	int	****ptr4me;
	int	*****ptr5me;
	int	******ptr6me;
	int	*******ptr7me;
	int	********ptr8me;
	int	*********ptr9me;

	me = 1241;
	ptr1me = &me;
	ptr2me = &ptr1me;
	ptr3me = &ptr2me;
	ptr4me = &ptr3me;
	ptr5me = &ptr4me;
	ptr6me = &ptr5me;
	ptr7me = &ptr6me;
	ptr8me = &ptr7me;
	ptr9me = &ptr8me;
	printf("Pointers, assemble!\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n-> %d\n",
		ptr1me, ptr2me, ptr3me, ptr4me, ptr5me,
		ptr6me, ptr7me, ptr8me, ptr9me, me);
	printf("I was born %d", me);
	ft_ultimate_ft(ptr9me);
	printf(", but after a moment I am %d.\n", me);
	return (0);
}

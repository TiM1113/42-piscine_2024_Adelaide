/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:21:09 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:11:20 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	reversearray[];
	int	i;

	i = 0;
	while (i < size - 1)
	{
		reverarray[i] = *tab[size - 1 - i];
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
    char str2[] = "Hello, world!";
    printf("Length of string '%s' is: %d\n", str2, ft_strlen(str2));
}
*/

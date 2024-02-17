/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:54 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 11:53:21 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	valueofa;
	int	valueofb;
	int	temp;

	valueofa = *a;
	valueofb = *b;
	temp = valueofa;
	valueofa = valueofb;
	valueofb = temp;
}
/* 
#include <stdio.h> 
int main()
{
int a = 10, b = 20;
printf("Before ft_swap: a = %d, b = %d\n", a, b);
ft_swap(&a, &b);
printf("after ft_swap: a = %d, b = %d\n", a, b);
*/

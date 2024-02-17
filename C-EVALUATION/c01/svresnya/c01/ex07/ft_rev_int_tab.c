/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:46:51 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/01 16:41:11 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	head_idx;
	int	tail_idx;

	temp = 0;
	head_idx = 0;
	tail_idx = size - 1;
	while (head_idx <= tail_idx)
	{
		ft_swap(&tab[head_idx], &tab[tail_idx]);
		tail_idx--;
		head_idx++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

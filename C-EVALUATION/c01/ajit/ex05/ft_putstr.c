/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:20 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:08:44 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello, world!";
    printf("Printing string using ft_putstr:\n");
    ft_putstr(str);
    printf("\n");
}
*/

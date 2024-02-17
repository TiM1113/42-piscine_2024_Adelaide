/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghising <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:39 by aghising          #+#    #+#             */
/*   Updated: 2024/02/10 12:09:27 by aghising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
    char str2[] = "Hello, world!";
    printf("Length of string '%s' is: %d\n", str2, ft_strlen(str2));
}
*/

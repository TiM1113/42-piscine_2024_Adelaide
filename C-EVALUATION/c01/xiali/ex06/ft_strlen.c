/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:39:32 by xiali             #+#    #+#             */
/*   Updated: 2024/01/29 10:50:40 by xiali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main (void)
{
	char	str[] = "Still struggling";
	int	i;

	i = ft_strlen(str);
	printf("String: %s\n", str);
	printf("Number of characters in this string: %d\n", i);
	return (0);
}
*/

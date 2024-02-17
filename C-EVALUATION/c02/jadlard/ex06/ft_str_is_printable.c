/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:50:02 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 15:11:19 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	char str[] = "heL lo";
	a = ft_str_is_printable(str);
	printf("1 = %d\n", a);

	char str1[] = "72";
	a = ft_str_is_printable(str1);
	printf("2 = %d\n", a);

	char str2[] = "ºÖ";
	a = ft_str_is_printable(str2);
	printf("3 = %d\n", a);

	char str3[] = "";
	a = ft_str_is_printable(str3);
	printf("4 = %d\n", a);	
}
*/

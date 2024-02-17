/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:44:15 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 11:44:34 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char str[] = "heLlo";
	a = ft_str_is_uppercase(str);
	printf("1 = %d\n", a);

	char str1[] = "HELLO";
	a = ft_str_is_uppercase(str1);
	printf("2 = %d\n", a);

	char str2[] = "h5";
	a = ft_str_is_uppercase(str2);
	printf("3 = %d\n", a);

	char str3[] = "";
	a = ft_str_is_uppercase(str3);
	printf("4 = %d\n", a);	
}
*/

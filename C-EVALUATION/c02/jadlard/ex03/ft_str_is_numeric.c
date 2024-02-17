/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:23:52 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 11:13:32 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	char str[] = "hello";
	a = ft_str_is_numeric(str);
	printf("1 = %d\n", a);
	
	char str1[] = "123a4567";
	a = ft_str_is_numeric(str1);
	printf("2 = %d\n", a);

	char str2[] = "125";
	a = ft_str_is_numeric(str2);
	printf("3 = %d\n", a);

	char str3[] = "";
	a = ft_str_is_numeric(str3);
	printf("4 = %d\n", a);
	
}
line 21 is or becuase we are 
looking either sdie of the brackets , 
and is if we are looking inside the brackets*/

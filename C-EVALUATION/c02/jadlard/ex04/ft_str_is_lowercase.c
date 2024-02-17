/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:18:12 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 11:34:31 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char str[] = "hello";
	a = ft_str_is_lowercase(str);
	printf("1 = %d\n", a);

	char str1[] = "Hello";
	a = ft_str_is_lowercase(str1);
	printf("2 = %d\n", a);

	char str2[] = "h5";
	a = ft_str_is_lowercase(str2);
	printf("3 = %d\n", a);

	char str3[] = "";
	a = ft_str_is_lowercase(str3);
	printf("4 = %d\n", a);	
}*/

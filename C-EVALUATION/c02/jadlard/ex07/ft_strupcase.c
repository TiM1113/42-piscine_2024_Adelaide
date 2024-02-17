/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.s                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:21:47 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 12:49:35 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			(str[i] = str[i] - 32);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	
	char str[] = "hello 42";
	printf("%s\n", ft_strupcase(str));
	printf("1 = %s\n", str);

	char str1[] = "Hello";
	printf("%s\n", ft_strupcase(str1));
	printf("2 = %s\n", str1);

	char str2[] = "h5";
	printf("%s\n", ft_strupcase(str2));
	printf("3 = %s\n", str2);

	char str3[] = "";
	printf("%s\n", ft_strupcase(str3));
	printf("4 = %s\n", str3);	
}
*/
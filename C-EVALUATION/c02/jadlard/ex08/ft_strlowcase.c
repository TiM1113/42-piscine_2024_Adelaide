/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:00:08 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/03 14:10:29 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] = str[i] + 32);
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
	printf("%s\n", ft_strlowcase(str));
	printf("1 = %s\n", str);

	char str1[] = "Hello";
	printf("%s\n", ft_strlowcase(str1));
	printf("2 = %s\n", str1);

	char str2[] = "h5";
	printf("%s\n", ft_strlowcase(str2));
	printf("3 = %s\n", str2);

	char str3[] = "";
	printf("%s\n", ft_strlowcase(str3));
	printf("4 = %s\n", str3);	
}
*/

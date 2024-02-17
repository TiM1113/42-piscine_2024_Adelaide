/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:40:18 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/02 11:53:23 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a' || str[c] > 'z') && (str[c] < 'A' || str[c] > 'Z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	int a;
	char str[] = "hello";

	a = ft_str_is_alpha(str);
	printf("%d", a);
	
	char str1[] = "hello1";
	a = ft_str_is_alpha(str1);
	printf("\n%d", a);

	char str2[] = "125";
	a = ft_str_is_alpha(str2);
	printf("\n%d", a);

	char str3[] = "";
	a = ft_str_is_alpha(str3);
	printf("\n%d", a);
	//if (str[c] == '\0') is not required becuse it does not contain any alphas
}
*/

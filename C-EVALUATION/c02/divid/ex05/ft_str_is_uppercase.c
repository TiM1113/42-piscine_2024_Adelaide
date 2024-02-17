/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:48:22 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/29 09:34:43 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str > 64) && (*str < 91)))
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	lower[] = "abcdef";
	char	UPPER[] = "ABCDEF";
	char	num[] = "12345";
	char	mixed[] = "a1r5!7L";
	char	nothing[32];

	printf("%s, %i\n", lower, ft_str_is_uppercase(&lower[0]));
	printf("%s, %i\n", UPPER, ft_str_is_uppercase(&UPPER[0]));
	printf("%s, %i\n", num, ft_str_is_uppercase(&num[0]));
	printf("%s, %i\n", mixed, ft_str_is_uppercase(&mixed[0]));
	printf("%sNULL, %i\n", nothing, ft_str_is_uppercase(&nothing[0]));
	return (0)
}
*/

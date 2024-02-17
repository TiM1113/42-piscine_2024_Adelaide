/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:36:08 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/28 13:41:15 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str > 96) && (*str < 123)))
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
 *
int	main(void)
{
	char	lower[] = "abcd";
	char	upper[] = "ABCD";
	char	mixed[] = "aBcDe";
	char	num[] = "1234";
	char	everything[] = "1aB3Gg";
	char	nothing[32];

	printf("%s: %i\n", lower, ft_str_is_lowercase(&lower[0]));
	printf("%s, %i\n", upper, ft_str_is_lowercase(&upper[0]));
	printf("%s, %i\n", mixed, ft_str_is_lowercase(&mixed[0]));
	printf("%s, %i\n", num, ft_str_is_lowercase(&num[0]));
	printf("%s, %i\n", everything, ft_str_is_lowercase(&everything[0]));
	printf("%sNULL, %i\n", nothing, ft_str_is_lowercase(&nothing[0]));
	return (0);
}
*/

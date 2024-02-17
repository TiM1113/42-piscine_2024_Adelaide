/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:44:38 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/28 14:20:55 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str > 47) && (*str < 58)))
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
	char	num[] = "1234";
	char	lower[] = "abcd";
	char	upper[] = "ABCD";
	char	mixed[] = "a1g57U!";
	char	nothing[32];

	printf("%s, %i\n", num,ft_str_is_numeric(&num[0]));
	printf("%s, %i\n", lower, ft_str_is_numeric(&lower[0]));
	printf("%s, %i\n", upper, ft_str_is_numeric(&upper[0]));
	printf("%s, %i\n", mixed, ft_str_is_numeric(&mixed[0]));
	printf("%sNULL, %i\n", nothing, ft_str_is_numeric(&nothing[0]));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:15:20 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/30 12:46:40 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str > 64) && (*str < 91) || (*str > 96) && (*str < 123)))
		{
			return (0);
		}
		else
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char	ALPHABET[] = "ABCDEFJHIJKLMNOPQRSTUVWXYZ";
	char	mixed[] ="aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	char	numbers[] = "123456789";
	char	everything[] = "1a2A3b4B5c6C";
	char	nothing[] = "\0";

	printf("%s: %i\n", alphabet, ft_str_is_alpha(&alphabet[0]));
	printf("%s: %i\n", ALPHABET, ft_str_is_alpha(&ALPHABET[0]));
	printf("%s: %i\n", mixed, ft_str_is_alpha(&mixed[0]));
	printf("%s: %i\n", numbers, ft_str_is_alpha(&numbers[0]));
	printf("%s: %i\n", everything, ft_str_is_alpha(&everything[0]));
	printf("%sNULL: %i\n", nothing, ft_str_is_alpha(&nothing[0]));
	return (0);
}

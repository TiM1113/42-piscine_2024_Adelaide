/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:44:32 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 12:00:30 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	test_alpha_str[] = "ASDGASDGASDagsdsdg";
	char	test_empty_str[] = "";
	char	test_number_str[] = "3634573458287";
	char	test_mixed_str[] = "wert2346ASDGA0^&%&()%4_=";

	printf("%d  %s\n", ft_str_is_numeric(test_alpha_str), test_alpha_str);
	printf("%d  %s\n", ft_str_is_numeric(test_empty_str), test_empty_str);
	printf("%d  %s\n", ft_str_is_numeric(test_number_str), test_number_str);
	printf("%d  %s\n", ft_str_is_numeric(test_mixed_str), test_mixed_str);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:01:15 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 11:42:38 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	test_alpha_string[] = "ASDGASDGASDagsdsdg";
	char	test_empty_string[] = "";
	char	test_number_string[] = "3634573458287";
	char	test_mixed_string[] = "wert2346ASDGA0^&%&()%4_=";

	printf("%d  %s\n", ft_str_is_alpha(test_alpha_string), test_alpha_string);
	printf("%d  %s\n", ft_str_is_alpha(test_empty_string), test_empty_string);
	printf("%d  %s\n", ft_str_is_alpha(test_number_string), test_number_string);
	printf("%d  %s\n", ft_str_is_alpha(test_mixed_string), test_mixed_string);
}
*/

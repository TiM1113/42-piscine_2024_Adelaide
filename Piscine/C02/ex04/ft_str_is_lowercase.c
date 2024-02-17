/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:03:14 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 12:39:22 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	test_alpha_str[] = "sgegowertagsdsdg";
	char	test_empty_str[] = "";
	char	test_number_str[] = "3634573458287";
	char	test_mixed_str[] = "FASDGHH2346ASDGA0^&%&()%4_=";

	printf("%d  %s\n", ft_str_is_lowercase(test_alpha_str), test_alpha_str);
	printf("%d  %s\n", ft_str_is_lowercase(test_empty_str), test_empty_str);
	printf("%d  %s\n", ft_str_is_lowercase(test_number_str), test_number_str);
	printf("%d  %s\n", ft_str_is_lowercase(test_mixed_str), test_mixed_str);
}
*/

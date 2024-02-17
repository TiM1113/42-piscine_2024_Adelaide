/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:41:48 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 13:12:19 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char lower_str[] = "tsasdgtring";
	char upper_str[] = "FASLDKJFASDLJGAG";
	char empty_str[] = "";
	char number_str[] = "214163457345";
	char mixed_str[] = "ASDASF25462asdgadg";

	printf("%d    %s\n",ft_str_is_uppercase(lower_str), lower_str);
	printf("%d    %s\n",ft_str_is_uppercase(upper_str), upper_str);
	printf("%d    %s\n",ft_str_is_uppercase(empty_str), empty_str);
	printf("%d    %s\n",ft_str_is_uppercase(number_str), number_str);
	printf("%d    %s\n",ft_str_is_uppercase(mixed_str), mixed_str);
}
*/

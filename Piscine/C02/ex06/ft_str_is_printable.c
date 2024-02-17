/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:14:33 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 13:50:16 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char mixed_str[] = "nul\n";

	printf("%d    %s\n",ft_str_is_printable(lower_str), lower_str);
	printf("%d    %s\n",ft_str_is_printable(upper_str), upper_str);
	printf("%d    %s\n",ft_str_is_printable(empty_str), empty_str);
	printf("%d    %s\n",ft_str_is_printable(number_str), number_str);
	printf("%d    %s\n",ft_str_is_printable(mixed_str), mixed_str);
}
*/

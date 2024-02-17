/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:32:27 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 13:08:53 by tsykala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
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

/*int	main()
{
//	char	str[] = "asdasdasdasdasd";
//	char	str[] = "asdasdadsasda1s";
//	char	str[] = "asdasdasdasdsaA";
	char	str[] = "";

	printf("%s\n", str);
	printf("%s = %d\n", str, ft_str_is_lowercase(str));
}*/

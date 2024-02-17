/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:48:54 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 13:10:01 by tsykala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
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

/*int	main()
{
	char	str[] = "AASSDSDS3";
//	char	str[] = "DFSDFSDFD";
//	char	str[] = "ASDASDASs";
//	char	str[] = "";
	
	printf("%s = %d\n", str, ft_str_is_uppercase(str));
}*/

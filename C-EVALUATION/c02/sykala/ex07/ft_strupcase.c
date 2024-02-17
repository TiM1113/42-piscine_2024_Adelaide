/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:25:28 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 15:28:50 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] = str[i] -32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
int main()
{
	char str[] = "hEllo W0rld";
	printf("%s\n", ft_strupcase(str));
	return(0);
}

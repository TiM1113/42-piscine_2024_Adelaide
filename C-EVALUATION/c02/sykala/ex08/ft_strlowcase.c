/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:05:15 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 13:13:00 by tsykala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'A' && str[i] < 'Z')
		{
			str[i] = str[i] +32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*int main()
{
	char	str[] = "heLLo W0rLD";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}*/

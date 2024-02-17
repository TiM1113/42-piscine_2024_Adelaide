/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:58:45 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/29 11:05:44 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str > 64) && (*str < 91))
		{
			*str += 32;
		}
		else
		{
			str++;
		}
	}
	if (*str == '\0')
	{
		return (str);
	}
	return (0);
}
/*
int	main(void)
{
	char	test[] = "abc ... DEF";

	printf("%s\n", test);
	ft_strlowcase(&test[0]);
	printf("%s\n", test);
	return (0);
}
*/

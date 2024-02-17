/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:36:21 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/29 10:57:23 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str > 96) && (*str < 123))
		{
			*str -= 32;
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
	char test[] = "ABC ... def";

	printf("%s\n", test);
	ft_strupcase(&test[0]);
	printf("%s\n", test); 
	return (0);	
}
*/

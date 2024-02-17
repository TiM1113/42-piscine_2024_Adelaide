/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:38:17 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/29 10:34:19 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 32) || (*str == 127))
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	test[] = "!a3Gz..p&[]";
	char	nothing[] = "\0";
	char	esc[] = " ";

	esc[0] = 27;
	printf("%s, %i\n", test, ft_str_is_printable(&test[0]));
	printf("NULL, %i\n", ft_str_is_printable(&nothing[0]));
	printf("ESC, %i\n", ft_str_is_printable(&esc[0]));
	return (0);
}
*/

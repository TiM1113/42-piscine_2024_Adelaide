/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:09:48 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/29 16:56:35 by dayoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_first_capit(char *str)
{
	if ((*str >= 'a') && (*str <= 'z'))
	{
		*str -= 32;
	}
	return (*str);
}

char	ft_decapit(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
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
		return (*str);
	}
	return (0);
}

int	ft_check_prev_adr(char str)
{
	if (str < 'A')
	{
		return (1);
	}
	else if ((str > 'Z') && (str < 'a'))
	{
		return (1);
	}
	else if (str > 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_decapit(&str[0]);
	ft_first_capit(&str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (ft_check_prev_adr(str[i - 1]) == 1)
			{
				str[i] -= 32;
				i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	if (str[i] == '\0')
	{
		return (str);
	}
	return (0);
}
/*
int	main(void)
{
	char	test[] =  "elBow great .hear 9019 7add";

	printf("%s\n", test);
	ft_strcapitalize(&test[0]);
	printf("%s\n", test);
	return (0);
}
*/

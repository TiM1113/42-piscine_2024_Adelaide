/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:39:02 by haliu             #+#    #+#             */
/*   Updated: 2024/01/31 13:10:57 by haliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char	*str, char *to_find)
{
	char	*start_str;
	char	*start_to_find;

	start_str = str;
	start_to_find = to_find;
	while (*to_find)
	{
		if (*str != *to_find)
		{
			str = start_str;
			to_find = start_to_find;
			return (0);
		}
		str++;
		to_find++;
	}
	str = start_str;
	to_find = start_to_find;
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (ft_cmp(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char    *a = "abcde";
    char    *b = "bcde";
	char	*c = "";
    char	*d = "yum";
	char	*e;

    printf("This is string a: %s", a);
    printf("\nThis is string b: %s", b);
	printf("\nThis is string c: %s", c);
	printf("\nThis is string d: %s", d);
    e =  ft_strstr(a, b);
    printf("\nThis is ft_strstr(a, b): %s", e);

	e =  ft_strstr(a, c);
	printf("\nThis is ft_strstr(a, c): %s", e);

	e = ft_strstr(a, d);
	printf("\nThis is ft_strstr(a, d): %s", e);
}
*/

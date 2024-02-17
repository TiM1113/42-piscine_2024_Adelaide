/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:39:25 by hchandle          #+#    #+#             */
/*   Updated: 2024/02/07 13:29:52 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

unsigned int	getlen(char *str);

unsigned int	getlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;

	strlen = getlen(str);
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while ((*(str) != '\0') && (*(str) != to_find[j]))
	{
		strlen--;
		str++;
	}
	while (to_find[j] != '\0')
	{
		if (*(str + i) == to_find[j])
		{
			i++;
			j++;
		}
		else
			return (NULL);
	}
	return (str);
}

int	main(void)
{
	char	a[] = "abcdefg";
	char	a1[] = "abcg";
	char	a2[] = "h";
	char	a3[] = "";
	char	a4[] = "d";
	char	a5[] = "abc";

	printf("strstr: %s,", strstr(a, a1));
	printf("ft_strstr: %s\n", ft_strstr(a, a1));
	printf("strstr: %s,", strstr(a, a2));
	printf("ft_strstr: %s\n", ft_strstr(a, a2));
	printf("strstr: %s,", strstr(a, a3));
	printf("ft_strstr: %s\n", ft_strstr(a, a3));
	printf("strstr: %s,", strstr(a, a4));
	printf("ft_strstr: %s\n", ft_strstr(a, a4));
	printf("strstr: %s,", strstr(a, a5));
	printf("ft_strstr: %s\n", ft_strstr(a, a5));
	return (0);
}


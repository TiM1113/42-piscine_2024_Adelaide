/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:40:07 by hchandle          #+#    #+#             */
/*   Updated: 2024/02/05 14:23:54 by hchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
*/
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (dest[0] == '\0')
	{
		return (dest);
	}
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len + i + 1] = src[i];
		i++;
	}
	dest[len + i + 1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[100] = "abcdefghijklmno";
	char	a1[] = "01234";
//	char	a2[] = "123";
//	char	a3[100] = "";
//	char	a4[] = "01234";
//	char	a5[] = "0123456789012345678";
//	char	a6[100] = "01";
//	char	a7[] = "";
	
	printf("strcat: %s,", strcat(a, a1));
	printf("ft_strcat: %s\n", ft_strcat(a, a1));
	printf("strcat: %s,", strcat(a, a2));
	printf("ft_strcat: %s\n", ft_strcat(a, a2));

	printf("strcat: %s,", strcat(a, a3));
	printf("ft_strcat: %s\n", ft_strcat(a, a3));

	printf("strcat: %s,", strcat(a, a4));
	printf("ft_strcat: %s\n", ft_strcat(a, a4));
	printf("strcat: %s,", strcat(a, a5));
	printf("ft_strcat: %s\n", ft_strcat(a, a5));

	printf("strcat: %s,", strcat(a, a6));
	printf("ft_strcat: %s\n", ft_strcat(a, a6));

	printf("strcat: %s,", strcat(a6, a));

	printf("ft_strcat: %s\n", ft_strcat(a6, a));

	printf("strcat: %s,", strcat(a3, a7));
	printf("ft_strcat: %s\n", ft_strcat(a3, a7));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:27:24 by hchandle          #+#    #+#             */
/*   Updated: 2024/02/05 15:37:40 by hchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dlen;

	i = 0;
	dlen = 0;
	if (dest[0] == '\0')
	{
		return (dest);
	}
	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[dlen + i + 1] = src[i];
		i++;
	}
	dest[dlen + i + 1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[100] = "abcdefghijklmno";
//	char	a1[] = "01234";
//	char	a2[] = "123";
//	char	a3[100] = "";
//	char	a4[] = "01234";
//	char	a5[] = "0123456789012345678";
//	char	a6[100] = "01";
	char	a7[] = "";
	unsigned int	n;

	n = 14;
//	printf("strncat: %s,", strncat(a, a1, n));
//	printf("ft_strncat: %s\n", ft_strncat(a, a1, n));

//	printf("strncat: %s,", strncat(a, a2, n));
//	printf("ft_strncat: %s\n", ft_strncat(a, a2, n));

//	printf("strcat: %s,", strcat(a, a3));
//	printf("ft_strcat: %s\n", ft_strcat(a, a3));

//	printf("strcat: %s,", strcat(a, a4));
//	printf("ft_strcat: %s\n", ft_strcat(a, a4));
//	printf("strcat: %s,", strcat(a, a5));
//	printf("ft_strcat: %s\n", ft_strcat(a, a5));

//	printf("strcat: %s,", strcat(a, a6));
//	printf("ft_strcat: %s\n", ft_strcat(a, a6));

//	printf("strcat: %s,", strcat(a6, a));
//	printf("ft_strcat: %s\n", ft_strcat(a6, a));

	printf("strncat: %s,", strncat(a, a7, n));
	printf("ft_strncat: %s\n", ft_strncat(a, a7, n));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:12:01 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 10:09:11 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
*/
char	*ft_strcpy(char *dest, char *src )
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	ft_strlen(char *str)
{
	int j = 0;
	if (str == NULL)
	{
		return (0);
	}

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

int	main(void)
{
	char testSrc[] = "This is a test string.";
	char *testDest = malloc(ft_strlen(testSrc) + 1);
	if (testDest == NULL)
	{
		printf("Memory allocation failed");
		return (1);
	}
	ft_strcpy(testDest, testSrc);
	printf("Original string: %s\n", testSrc);
	printf("Copied string: %s\n", testDest);

	free(testDest);
	return (0);
}
*/

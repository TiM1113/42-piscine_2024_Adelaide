/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:25:51 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 10:55:55 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	testSrc[] = "This is a test string for ex01";
	char	*testDest = malloc(strlen(testSrc) + 1);
	if	(testDest == NULL)
	{
		printf("Memory allocation failed");
		return (1);
	}

printf("Dest string n=5:%s\n", ft_strncpy(testDest, testSrc, 5));
printf("Dest string n=7:%s\n", ft_strncpy(testDest, testSrc, 7));
printf("Dest string:%s\n", ft_strncpy(testDest, testSrc, strlen(testSrc) +1));	
	free(testDest);
	return (0);
}
*/

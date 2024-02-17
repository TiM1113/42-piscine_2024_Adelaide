/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:04:25 by hchandle          #+#    #+#             */
/*   Updated: 2024/02/07 13:19:27 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0') && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int	main(void)
{
	char	a[] = "abcdefg";
	char	a1[] = "abcdd";
	char	a2[] = "abcc";
	char	a3[] = "";
	char	a4[] = "xyz";
	char	a5[] = "abcdefg";
	char	a6[] = "ab";
	
	printf("strcmp: %d,", strcmp(a, a1));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a1));
	printf("strcmp: %d,", strcmp(a, a2));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a2));
	printf("strcmp: %d,", strcmp(a, a3));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a3));
	printf("strcmp: %d,", strcmp(a, a4));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a4));
	printf("strcmp: %d,", strcmp(a, a5));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a5));
	printf("strcmp: %d,", strcmp(a, a6));
	printf("ft_strcmp: %d\n", ft_strcmp(a, a6));
	printf("strcmp: %d,", strcmp(a6, a));
	printf("ft_strcmp: %d\n", ft_strcmp(a6, a));
	printf("strcmp: %d,", strcmp(a3, a3));
	printf("ft_strcmp: %d\n", ft_strcmp(a3, a3));
	
	return (0);
}


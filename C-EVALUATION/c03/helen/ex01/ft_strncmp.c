/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:33:25 by hchandle          #+#    #+#             */
/*   Updated: 2024/02/05 11:34:07 by hchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "abcdefghijkl";
	char	a1[] = "abcddef";
	char	a2[] = "abcc";
	char	a3[] = "";
	char	a4[] = "xyz";
	char	a5[] = "abcdefg";
	char	a6[] = "ab";
	unsigned int	n;

	n	= 5;
	printf("strncmp: %d,", strncmp(a, a1, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a1, n));
	printf("strncmp: %d,", strncmp(a, a2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a2, n));
	printf("strncmp: %d,", strncmp(a, a3, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a3, n));
	printf("strncmp: %d,", strncmp(a, a4, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a4, n));
	printf("strncmp: %d,", strncmp(a, a5, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a5, n));
	printf("strncmp: %d,", strncmp(a, a6, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a, a6, n));
	printf("strncmp: %d,", strncmp(a6, a, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a6, a, n));
	printf("strncmp: %d,", strncmp(a3, a3, n));
	printf("ft_strncmp: %d\n", ft_strncmp(a3, a3, n));
	
	return (0);
}
*/

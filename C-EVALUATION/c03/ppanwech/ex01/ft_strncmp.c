/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanwech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:49:48 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:18:40 by ppanwech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    src[] = "Goodluck";
    char    str2[] = "goodluck";
    char    str3[] = "GoodLuck";
    char    str4[] = "";
    char    str5[] = "Goodluck";

    printf("strncmp(src, str2) = %d\n", strncmp(src, str2, 4));
    printf("strncmp(src, str3) = %d\n", strncmp(src, str3, 4));
    printf("strncmp(src, str4) = %d\n", strncmp(src, str4, 4));
    printf("strncmp(src, str5) = %d\n\n", strncmp(src, str5, 4));

    printf("ft_strncmp(src, str2) = %d\n", ft_strncmp(src, str2, 4));
    printf("ft_strncmp(src, str3) = %d\n", ft_strncmp(src, str3, 4));
    printf("ft_strncmp(src, str4) = %d\n", ft_strncmp(src, str4, 4));
    printf("ft_strncmp(src, str5) = %d\n\n", ft_strncmp(src, str5, 4));
}
*/

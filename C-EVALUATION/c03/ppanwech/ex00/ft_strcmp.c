/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panu <panu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:46:58 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:18:19 by ppanwech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str1[] = "Goodluck";
    char    str2[] = "goodluck";
    char    str3[] = "Goodlucks";
    char    str4[] = "";
    char    str5[] = "Goodluck";

    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
    printf("strcmp(str1, str3) = %d\n", strcmp(str1, str3));
    printf("strcmp(str1, str4) = %d\n", strcmp(str1, str4));
    printf("strcmp(str1, str5) = %d\n\n", strcmp(str1, str5));

    printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
    printf("ft_strcmp(str1, str3) = %d\n", ft_strcmp(str1, str3));
    printf("ft_strcmp(str1, str4) = %d\n", ft_strcmp(str1, str4));
    printf("ft_strcmp(str1, str5) = %d\n\n", ft_strcmp(str1, str5));
}
*/

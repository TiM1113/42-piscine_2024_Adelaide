/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanwech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:19:23 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:19:29 by ppanwech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (*str != '\0' && to_find[i] != '\0')
	{
		if (*str == to_find[i])
			i++;
		else
			i = 0;
		str++;
	}
	if (to_find[i] == '\0')
	{
		str = str - i;
		return (str);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[30] = "everythingisfine!thint!think!";
    char find2[] = "thing";
    char find3[] = "think";
    char find4[] = "Thint";

    printf("   strstr : |%s|\n", strstr(src, find2));
    printf("   strstr : |%s|\n", strstr(src, find3));
    printf("   strstr : |%s|\n", strstr(src, find4));

    printf("ft_strstr : |%s|\n", ft_strstr(src, find2));
    printf("ft_strstr : |%s|\n", ft_strstr(src, find3));
    printf("ft_strstr : |%s|\n", ft_strstr(src, find4));
    return(0);
}
*/

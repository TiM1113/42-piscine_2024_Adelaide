/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panu <panu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:48:18 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:18:55 by ppanwech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_src;
	int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = 0;
	while (i < size_src)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[50] = "source!";
	char dest[50] = "destination!";
	char dest2[50] = "d2stination!";

	strcat(dest, src);
	printf("   strcat : |%s|\n\n", dest);

	ft_strcat(dest2, src);
	printf("ft_strcat : |%s|\n", dest2);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:48:51 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/30 12:34:22 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0')
	{
		*dest = '\0';
	}
	return (dest);
}

int	main(void)
{
	char	original[] = "This is a test.";
	char	copy[] = "";
    ft_strcpy(&copy[0], &original[0]);
	printf("%s\n", copy);
	return (0);
}


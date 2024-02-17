/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:14:34 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/04 14:03:41 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char copy[] = "copy this";
    char here[] = "to tooooooooooooooooo here";

    printf(" %s", ft_strncpy(here, copy, 4));
    printf("\n %s org", strncpy(here, copy, 4));
    printf("\n %s", ft_strncpy(here, copy, 7));
    printf("\n %s org", strncpy(here, copy, 7));
    printf("\n %s", ft_strncpy(here, copy, 15));
    printf("\n %s org", strncpy(here, copy, 15));
}

unsigned int is a different size to int so much match n and c for this
this function copies the string length and adds nulls if not long enough
we are calling the function in printf and adding the values into it
*/

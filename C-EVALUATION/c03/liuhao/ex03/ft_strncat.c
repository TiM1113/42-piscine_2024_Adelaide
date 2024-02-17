/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:00:18 by haliu             #+#    #+#             */
/*   Updated: 2024/01/31 15:44:56 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}
/*
#include <stdio.h>

int main(void)
{
    char    a[20] = "Hello";
	printf("This is string a: %s", a);
	char    b[20] = "World";
	printf("\nThis is string b: %s", b);
	char    c[] = "!!!!!!!";
    printf("\nThis is string c: %s", c);
    char *d =  ft_strncat(a, b, 5);
    printf("\nThis is ft_strncat(a, b, 7): %s", a);

	d = ft_strncat(b, c, 1);
	printf("\nThis is ft_strncat(b, c, 1): %s", b);
	d = ft_strncat(c, a, 0);
    printf("\nThis is ft_strncat(c, a, 0): %s", c);
}
*/

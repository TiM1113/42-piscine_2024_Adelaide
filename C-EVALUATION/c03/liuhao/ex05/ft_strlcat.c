/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:12:30 by haliu             #+#    #+#             */
/*   Updated: 2024/01/31 14:18:28 by haliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	total_length;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	total_length = ft_strlen(dest) + ft_strlen(src);
	while (*dest)
	{
		dest++;
	}
	if (size > dest_size + 1)
	{
		while (src[i] != '\0' && i < size - dest_size - 1)
		{
			*dest = src[i];
			i++;
			dest++;
		}
	}
	*dest = '\0';
	return (total_length);
}
/*
#include <stdio.h>

int main(void)
{
    char    a[99] = "abc";
	printf("This is string a: %s", a);
    char    *b = "bcde";
	printf("\nThis is string b: %s", b);
	int c  = ft_strlcat(a, b, 0);
    printf("\nThis is ft_strlcat(a, b, 0): %s", a);
	c  = ft_strlcat(a, b, 10);
    printf("\nThis is ft_strlcat(a, b, 10): %s", a);
}
*/

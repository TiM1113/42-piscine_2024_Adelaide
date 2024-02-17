/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:21:56 by haliu             #+#    #+#             */
/*   Updated: 2024/01/31 15:41:17 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 != '\0' && *s2 != '\0' && n > 0 && *s1 == *s2)
	{
		s2++;
		s1++;
		n--;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int main(void)
{
    char    a[] = "abc";
    char    b[] = "bcde";
	char	c[] = "bcde";
    int	d;

    printf("This is string a: %s", a);
    printf("\nThis is string b: %s", b);
	printf("\nThis is string c: %s", c);
    d =  ft_strncmp(b, a, 6);
    printf("\nThis is ft_strcmp(b, a, 6): %d", d);
	d =  ft_strncmp(b, c, 1);
	printf("\nThis is ft_strcmp(b, c, 1): %d", d);
	d =  ft_strncmp(b, c, 0);
    printf("\nThis is ft_strcmp(b, c, 0): %d", d);
}
*/

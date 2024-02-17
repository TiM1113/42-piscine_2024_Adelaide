/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:18 by haliu             #+#    #+#             */
/*   Updated: 2024/02/06 11:03:38 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2 != '\0' && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

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
    d =  ft_strcmp(b, a);
    printf("\nThis is ft_strcmp(b, a): %d", d);
    
	d =  ft_strcmp(b, c);
	printf("\nThis is ft_strcmp(b, c): %d", d);
}

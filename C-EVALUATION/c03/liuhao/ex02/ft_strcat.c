/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:37:18 by haliu             #+#    #+#             */
/*   Updated: 2024/01/31 11:58:08 by haliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/*
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int main(void)
{
    char    a[] = "abc";
	printf("This is string a: %s", a);
    char    b[] = "bcde";
	printf("\nThis is string b: %s", b);
	char	*c = ft_strcat(a, b);
    printf("\nThis is ft_strcat(a, b): %s", a);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:10:20 by jadlard           #+#    #+#             */
/*   Updated: 2024/02/04 14:11:15 by jadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "words to copy";
	char d2[] = "test";
	printf("%s", ft_strcpy(d2, str));
	char str1[] = "finish";
	char d21[] = "start";
	printf("\n%s", ft_strcpy(d21, str1));
	return (0);
}

we are just coping a sting to a new location
we need to check the sting lenght and add a null

make sure the pionters are in the right spot to test correctly
dest is d2 
it would make more
sense to put them as d2 first then str for it to print*/

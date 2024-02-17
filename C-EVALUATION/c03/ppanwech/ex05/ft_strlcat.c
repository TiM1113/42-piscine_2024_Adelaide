/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panu <panu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:50:36 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:19:45 by ppanwech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lenght;

	i = 0;
	lenght = 0;
	while (dest[i] != '\0')
	{
		i++;
		lenght++;
	}
	while (*src != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = *src;
			i++;
		}
		src++;
		lenght++;
	}
	dest[i] = '\0';
	return (lenght);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest1[10] = "abc";
    char dest10[10] = "abc";
    char src1[] = "zxynm";
    char src10[] = "zxynm";

	char dest2[6] = "abc";
	char dest20[6] = "abc";
    char src2[] = "zx";
    char src20[] = "zx";

	int	len1;
	int	len2;
	int	len10;
	int	len20;

   len1 = strlcat(dest1, src1, 10);
   printf("   strlcat len=%d : |%s|\n\n", len1, dest1);

   len2 = strlcat(dest2, src2, 6);
   printf("   strlcat len=%d : |%s|\n\n", len2, dest2);

   len10 = ft_strlcat(dest10, src10, 10);
   printf("ft_strlcat len=%d : |%s|\n\n", len10, dest10);

   len20 = ft_strlcat(dest20, src20, 6);
   printf("ft_strlcat len=%d : |%s|\n\n", len20, dest20);
   return(0);
}
*/

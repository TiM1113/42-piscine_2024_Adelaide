/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panu <panu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:50:36 by ppanwech          #+#    #+#             */
/*   Updated: 2024/02/05 13:19:08 by ppanwech         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_src;
	int				size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = 0;
	while (i < size_src && i < nb)
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

int main(void)
{
    char src[50] = "source!";
    char dest[50] = "destination!";
    char dest2[50] = "d2stination!";

   strncat(dest, src, 3);
   printf("   strncat : |%s|\n\n", dest);
   
   ft_strncat(dest2, src, 3);
   printf("ft_strncat : |%s|\n", dest2);
   return(0);
}
*/

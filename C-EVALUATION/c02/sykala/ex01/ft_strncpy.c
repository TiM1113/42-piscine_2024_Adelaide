/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:52:45 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 14:55:36 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//signed numbers represents negative or posative numbers incl 0
//unsigned represents only values greater than or = to 0
//int, short, long & long long are all signed.
//we obtain the corresponding unsigned typ by addng unsigned to the type
//eg unsigned long - means it wont support negative no
// 
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char	dest[] = "";
	char	src[] = "123456789";
int n = 5;

	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}

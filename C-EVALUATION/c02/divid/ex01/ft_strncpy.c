/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayoung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:42:29 by dayoung           #+#    #+#             */
/*   Updated: 2024/01/30 12:41:33 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else if ((*src == '\0') && (counter == n - 1))
		{
			return (dest);
		}
		else if (*src == '\0')
		{
			*dest = '\0';
			dest++;
		}
		counter++;
	}
	return (dest);
}

int	main(void)
{
	unsigned int	n;
	n = 64;
	char	src[] = "abcdefghijklmnopqrstuvwxyz";
	char	dest[n];

	printf("n: %i\n", n);
	ft_strncpy(&dest[0], &src[0], n);
	printf("%s\n", dest);
	return (0);
}

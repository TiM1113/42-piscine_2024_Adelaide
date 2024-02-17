/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:24:45 by ktong             #+#    #+#             */
/*   Updated: 2024/02/12 17:08:11 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count(char **strs)
{
	int	count;
	int	count2;
	int	c;

	count = 0;
	c = 0;
	while (strs[count])
	{
		count2 = 0;
		while (strs[count][count2])
		{
			count2++;
			c++;
		}
		count ++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
	{
		count ++;
	}
	while (src[count2])
	{
		dest[count] = src[count2];
		count ++;
		count2 ++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*i;

	count = 0;
	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(char) * (ft_count(strs) + size - 1));
	while (count < size - 1)
	{
		ft_strcat(i, strs[count]);
		ft_strcat(i, sep);
		count ++;
	}
	ft_strcat(i, strs[count]);
	return (i);
}

int	main(int argc, char *argv[])
{
	char sep[] = "/";
	argv++;

	printf("%s", ft_strjoin(argc - 1, argv, sep));
	return (argc);
}


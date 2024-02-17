/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:36:47 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/07 17:36:48 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}

int	ft_nb_ltr(char **strs, int size)
{
	int		count;
	int		i;
	int		ltr;

	i = 0;
	ltr = 0;
	while (i < size)
	{
		count = 0;
		while (ltr++, strs[i][count])
			count++;
		i++;
	}
	return (ltr);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		ltr;

	i = 0;
	ltr = 0;
	if (size == 0)
	{
		result = malloc(0);
		free(result);
		return (result);
	}
	result = malloc((ft_nb_ltr(strs, size)
				+ ft_strlen(sep) * (size - 1) + 1) * sizeof(char));
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(result, strs[i]);
		ft_strcat(result, sep);
		i++;
	}
	ft_strcat(result, strs[i]);
	return (result);
}

/*
int	main(int argc, char *argv[])
{
	char	*str;

	str = "/ \\";
	argv++;
	printf("La chaine : %s", ft_strjoin(argc - 1, argv, str));
	return (argc);
}
*/
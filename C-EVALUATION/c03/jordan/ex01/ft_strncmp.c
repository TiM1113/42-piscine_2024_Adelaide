/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:58:19 by jdiaz             #+#    #+#             */
/*   Updated: 2024/02/06 12:45:16 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <strings.h>
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "aaade";
	char	s2[] = "Azbrr";
	unsigned int	n = 3;

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matalfor <matalfor@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:02:20 by matalfor          #+#    #+#             */
/*   Updated: 2024/02/01 14:51:38 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char s1[] = "hello";
	char s2[] = "hallo";
	char s3[] = "hollo";
	char s4[] = "he110";
	unsigned int n = 3;
	
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s3, n));
	printf("%d\n", ft_strncmp(s1, s4, n));
}

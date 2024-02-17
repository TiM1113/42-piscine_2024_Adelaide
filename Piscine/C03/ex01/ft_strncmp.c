/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:04:18 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/09 19:51:54 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

#include <stdio.h>
int	main(void)
{
	char	s1[] = "abcdefgH";
	char	s2[] = "abcdefgH";
	char	s3[] = "abde";
	char	s4[] = "abcdefgfasdgsgdf";
	char	s5[] = "";

	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strncmp(s1, s2, 4));
    printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strncmp(s1, s3, 4));
    printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strncmp(s1, s4, 10));
    printf("Comparing '%s' and '%s': %d\n", s1, s5, ft_strncmp(s1, s5, 1));
}


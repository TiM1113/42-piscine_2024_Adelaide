/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:17:02 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/07 11:33:53 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/*
#include <stdio.h>
int 	main(void)
{
	char	s1[] = "abcd";
	char	s2[] = "abcd";
	char	s3[] = "ab";
	char	s4[] = "abcdefg";
	char	s5[] = "";

	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2)); 
    printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3)); 
    printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strcmp(s1, s4)); 
    printf("Comparing '%s' and '%s': %d\n", s1, s5, ft_strcmp(s1, s5)); 
}
*/

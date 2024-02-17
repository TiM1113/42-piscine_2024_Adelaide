/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkafley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:21:17 by nkafley           #+#    #+#             */
/*   Updated: 2024/02/12 16:16:56 by nkafley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{	
	char a[] = "jinVJung!";
	char notalpha[] = "MissingHome";
	printf("%d\n", ft_str_is_alpha(notalpha));
	printf("Word is: %s\n", notalpha);
	printf("%d\n",ft_str_is_alpha(a));
	printf("Word is: %s", a);	
}
*/

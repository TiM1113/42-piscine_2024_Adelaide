/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:53:34 by tiyuan            #+#    #+#             */
/*   Updated: 2024/02/05 14:01:13 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test_lowercase_string[] = "tsasdgtring";
	char test_uppercase_string[] = "FASLDKJFASDLJGAG";
	char test_empty_string[] = "";
	char test_number_string[] = "214163457345";
	char test_mixed_string[] = "FALSDKGJA%*%^#^()()54ASDFASD";

	printf("%s\n",ft_strlowcase(test_lowercase_string));
	printf("%s\n",ft_strlowcase(test_uppercase_string));
	printf("%s\n",ft_strlowcase(test_empty_string));
	printf("%s\n",ft_strlowcase(test_number_string));
	printf("%s\n",ft_strlowcase(test_mixed_string));
}
*/

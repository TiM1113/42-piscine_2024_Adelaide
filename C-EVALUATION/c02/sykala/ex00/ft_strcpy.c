/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsykala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:14:14 by tsykala           #+#    #+#             */
/*   Updated: 2024/01/31 14:49:59 by tiyuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = src [counter];
	return (dest);
}
/*
Setfunction to delcare 2 variables to point to those varibles inside thefunction
Declare a (counter) variable to store the position of the array.
While the source of the variable array position, is not at the end of the array.
Source position is euqal to the destination position 
Then add one counter moving the position of the array.
When the loop is finished return the destination array. 
Essentailly we have more the positions over from one array to another.
*/
int	main(void)
{
	char	src[] = "Hello1";
	char	dest[] = "Hello2";

	printf("%s\n", src);
	ft_strcpy(src, dest);
	printf("%s\n",src);

	return (0);
}

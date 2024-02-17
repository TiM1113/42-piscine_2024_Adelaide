/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:50:26 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/30 11:36:25 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	char	length_of_string;

	length_of_string = 0;
	while (str[length_of_string])
		length_of_string++;
	write(1, str, length_of_string);
}
/*
int	main(void)
{
	ft_putstr("Greetings");
}
*/
// Other ways to type a string 
//char c[] = "abcd";
//char c[50] = "abcd";
//char[] = {'a', 'b', 'c', 'd', '/0'};
//char c[5] = {'a', 'b', 'c', 'd', '/0'}; 
//str[0] = G
//str[1] = r
//str[2] = e
// .... str[9] = s

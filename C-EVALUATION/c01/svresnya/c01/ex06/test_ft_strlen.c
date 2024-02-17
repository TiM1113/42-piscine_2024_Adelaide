/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:40:33 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:47:00 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*text;

	text = "s";
	printf("The length of a letter \"%s\" is (1)=%d\n", text, ft_strlen(text));
	text = "\\";
	printf("The length of (escaped) backslash \"%s\" is still (1)=%d\n",
		text, ft_strlen(text));
	text = "\n";
	printf("The length of a newline \"%s\" is (1)=%d\n", text, ft_strlen(text));
	text = "tab\ttab";
	printf("The length of \"%s\" is (7)=%d\n", text, ft_strlen(text));
	text = "some\ntext\there";
	printf("The length of \"%s\" is (14)=%d\n", text, ft_strlen(text));
	text = "";
	printf("The length of empty string \"%s\" is (0)=%d\n",
		text, ft_strlen(text));
	text = "text\nand more\\!";
	printf("The length of a newline sandwich \"%s\" is (15)=%d\n",
		text, ft_strlen(text));
	text = "\t";
	printf("The length of a tab \"%s\" is (1)=%d\n", text, ft_strlen(text));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:53 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/08 16:08:55 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_find_next_sep(int count, char *str, char *charset);
int	ft_find_next_sep2(int count, char *str, char *charset);

int	ft_strlen(int count, char *str, char *charset)
{
	int		count2;

	if (count == -1)
	{
		count = 0;
		while (str[count])
			count++;
		return (count);
	}
	count2 = 0;
	while (str[count] == charset[count2] && str[count] != '\0')
	{
		count++;
		count2++;
	}
	if (charset[count2] == '\0')
		return (1);
	return (0);
}

int	ft_word(char *str, char *charset, int action)
{
	int		count;

	count = 0;
	if (action == 0)
	{
		while (str[action])
		{
			if (str[count] == charset[0] && ft_strlen(count, str, charset)
				&& count != 0)
			{
				count++;
				action = ft_find_next_sep2(count, str, charset);
			}
			else
				action++;
		}
		return (action);
	}
	while (charset[count])
	{
		str[count] = charset[count];
		count++;
	}
	str[count] = charset[count];
	return (0);
}

int	ft_find_next_sep2(int count, char *str, char *charset)
{
	int		count2;
	int		temp;

	temp = count;
	while (str[count] == charset[0] && str[count])
	{
		count2 = 0;
		while (str[count] == charset[count2] && str[count])
		{
			count++;
			count2++;
		}
		if (charset[count2] == ('\0'))
			temp = count;
	}
	return (temp);
}

char	*end_of_string(char *cpy, char *charset, int i)
{
	int		count;
	int		sep;

	sep = 0;
	count = i;
	while (count++, cpy[count - 1])
	{
		if (ft_strlen(count, cpy, charset) && count != 0)
		{
			sep = 1;
		}
	}
	if (sep == 0 && count - 1 != i)
		return (&cpy[i]);
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*cpy;
	int		count;
	int		i;
	int		count2;

	i = ft_find_next_sep2(0, str, charset);
	count = ft_find_next_sep2(0, str, charset) - 1;
	count2 = 0;
	cpy = malloc(sizeof(char) * (ft_strlen(-1, str, "+") + 1));
	result = malloc(sizeof(str) * (ft_word(str, charset, 0) + 1));
	ft_word(cpy, str, 1);
	while (count++, cpy[count])
	{
		if (ft_strlen(count, str, charset) && count != 0)
		{
			cpy[count] = '\0';
			result[count2] = &cpy[i];
			count2++;
			i = ft_find_next_sep2(count, str, charset);
			count = i - 1;
		}
	}
	result[count2] = end_of_string(cpy, charset, i);
	return (result);
}

/*
int	main(void)
{
	int		count;
	char	**str;

	count = 0;
	// Join next 2 lines
	str = ft_split("Bonjour/  \\Mon/ \\beau/ \\/ \\
	<# 42 Love/ \\Xo/ \\Xo", "/ \\");
	while (str[count])
	{
		printf("%s\n", str[count]);
		count++;
	}
	return (0);
}
*/
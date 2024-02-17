/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:07:14 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/07 19:07:17 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str, char value)
{
	int		count;
	int		is_it_here;

	count = 0;
	is_it_here = 0;
	if (value == '+')
	{
		while (str[count])
			count++;
		return (count);
	}
	while (str[count])
	{
		if (str[count] == value)
			is_it_here = 1;
		count++;
	}
	return (is_it_here);
}

int	ft_valid_base(char *str)
{
	int		count;
	int		pos;

	count = 0;
	pos = 0;
	if (ft_strlen(str, '+') < 2)
		return (0);
	while (str[pos])
	{
		if (str[pos] == '+' || str[pos] == '-' || str[pos] == ' '
			|| (str[pos] >= '\t' && str[pos] <= '\r'))
			return (0);
		count = pos + 1;
		while (str[count])
		{
			if (str[count] == str[pos])
				return (0);
			count++;
		}
		pos++;
	}
	return (1);
}

int	ft_get_index(char *str, int *num_neg)
{
	int		nbr;

	nbr = 0;
	while (str[nbr] == ' ' || (str[nbr] >= '\t' && str[nbr] <= '\r'))
		nbr++;
	while (str[nbr] == '-' || str[nbr] == '+')
	{
		if (str[nbr] == '-')
			*num_neg += 1;
		nbr++;
	}
	return (nbr);
}

int	num_in_base(char *str, char *base)
{
	int		count;

	count = 0;
	while (base[count])
	{
		if (*str == base[count])
			return (count);
		count++;
	}
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		l_base;
	int		res;
	int		num_neg;
	int		i;

	l_base = ft_strlen(base, '+');
	res = 0;
	num_neg = 0;
	i = ft_get_index(str, &num_neg);
	while (ft_strlen(base, str[i]) == 1)
	{
		res *= l_base;
		res += num_in_base(&str[i], base);
		i++;
	}
	if (num_neg % 2 == 1)
		return (-res);
	return (res);
}

// int	main(int argc, char	*argv[])
// {
// 	// char	base[] = "0123456789ABCDEF";
// 	// char	str[] = " \r \t \n    ++--+05431120njbv45868njkm";
// 	argc = 54;
// 	printf("Chiffre : %d\n", ft_atoi_base(argv[1], argv[2]));
// 	// printf("Chiffre : %d\n", ft_atoi_base(str, base));
// 	return (0);
// }

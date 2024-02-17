/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:06:02 by sastier-          #+#    #+#             */
/*   Updated: 2024/02/07 18:06:04 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_valid_base(char *str);

int	ft_strlen2(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

void	ft_rev(char *str)
{
	int		len_str;
	int		count;
	char	temp;

	count = 0;
	len_str = ft_strlen2(str);
	if (str[0] == '-')
		count = 1;
	while (count < len_str)
	{
		temp = str[count];
		str[count] = str[len_str - 1];
		str[len_str - 1] = temp;
		count++;
		len_str--;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	int		temp;
	int		count;
	int		count2;
	char	*result;

	count = 0;
	count2 = 0;
	temp = nbr;
	len_base = ft_strlen2(base);
	if (count++, temp != 0)
		temp /= len_base;
	result = malloc((count + 2) * sizeof(char));
	if (nbr < 0)
		result[count2++] = '-';
	if (nbr == 0)
		result[0] = base[nbr % len_base];
	while (nbr != 0)
	{
		result[count2] = base[ft_absolute_value(nbr % len_base)];
		nbr /= len_base;
		count2++;
	}
	ft_rev(result);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		temp;

	if (ft_valid_base(base_from) == 0 || ft_valid_base(base_to) == 0)
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(temp, base_to);
	return (result);
}

/*
int	main(int argc, char *argv[])
{
	char	*result;
	result = ft_convert_base(argv[1], argv[2], "01");
	printf("result : %s\n", result);
	return (argc);
}
*/
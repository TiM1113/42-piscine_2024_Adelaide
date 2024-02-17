#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	str = ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if(str[i] >='a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char original_str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
       	char str_test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    
    // 对str_test字符串进行大写化处理
    ft_strcapitalize(str_test);
    
    // 打印原始字符串和大写化后的字符串进行对比
    printf("Original: %s\nCapitalized: %s\n", original_str, str_test);
}

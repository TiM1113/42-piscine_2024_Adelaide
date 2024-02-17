#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (str);
	}

	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char test_lowercase_string[] = "tsasdgtring";
	char test_uppercase_string[] = "FASLDKJFASDLJGAG";
	char test_empty_string[] = "";
	char test_number_string[] = "214163457345*";
	char test_mixed_string[] = "ASDASF25462asdgadg";

	printf("%s\n",ft_strupcase(test_lowercase_string));
	printf("%s\n",ft_strupcase(test_uppercase_string));
	printf("%s\n",ft_strupcase(test_empty_string));
	printf("%s\n",ft_strupcase(test_number_string));
	printf("%s\n",ft_strupcase(test_mixed_string));
}

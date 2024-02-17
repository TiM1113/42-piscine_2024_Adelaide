#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}

	while(str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
		return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char test_lowercase_string[] = "tsasdgtring";
	char test_uppercase_string[] = "FASLDKJFASDLJGAG";
	char test_empty_string[] = "";
	char test_number_string[] = "214163457345*";
	char test_mixed_string[] = "ASDASF25462asdgadg";

	printf("%d    %s\n",ft_str_is_lowercase(test_lowercase_string), test_lowercase_string);
	printf("%d    %s\n",ft_str_is_lowercase(test_uppercase_string), test_uppercase_string);
	printf("%d    %s\n",ft_str_is_lowercase(test_empty_string), test_empty_string);
	printf("%d    %s\n",ft_str_is_lowercase(test_number_string), test_number_string);
	printf("%d    %s\n",ft_str_is_lowercase(test_mixed_string), test_mixed_string);
}


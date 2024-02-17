#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}

	while(str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char test_number_string[] = "214163457345";
	char test_mixed_string[] = "52346fsdgshdfADFA_=^$^(()(\n\t";

	printf("%d    %s\n",ft_str_is_printable(test_lowercase_string), test_lowercase_string);
	printf("%d    %s\n",ft_str_is_printable(test_uppercase_string), test_uppercase_string);
	printf("%d    %s\n",ft_str_is_printable(test_empty_string), test_empty_string);
	printf("%d    %s\n",ft_str_is_printable(test_number_string), test_number_string);
	printf("%d    %s\n",ft_str_is_printable(test_mixed_string), test_mixed_string);
}



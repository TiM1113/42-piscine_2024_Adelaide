#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}

	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char test_alpha_string[] = "SAFDKGLSGtsasdgtring";
	char test_empty_string[] = "";
	char test_number_string[] = "2141368_-%&^%&*";
	char test_mixed_string[] = "124^%&*ASDASF25462asdgadg";

	printf("%d    %s\n",ft_str_is_alpha(test_alpha_string), test_alpha_string);
	printf("%d    %s\n",ft_str_is_alpha(test_empty_string), test_empty_string);
	printf("%d    %s\n",ft_str_is_alpha(test_number_string), test_number_string);
	printf("%d    %s\n",ft_str_is_alpha(test_mixed_string), test_mixed_string);
}

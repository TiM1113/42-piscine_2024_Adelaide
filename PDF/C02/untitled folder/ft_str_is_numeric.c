#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}

	while(str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char test_alpha_string[] = "SAFDKGLSGtsasdgtring";
	char test_empty_string[] = "";
	char test_number_string[] = "21413680234987";
	char test_mixed_string[] = "124^%&*ASDASF25462asdgadg";

	printf("%d    %s\n",ft_str_is_numeric(test_alpha_string), test_alpha_string);
	printf("%d    %s\n",ft_str_is_numeric(test_empty_string), test_empty_string);
	printf("%d    %s\n",ft_str_is_numeric(test_number_string), test_number_string);
	printf("%d    %s\n",ft_str_is_numeric(test_mixed_string), test_mixed_string);
}


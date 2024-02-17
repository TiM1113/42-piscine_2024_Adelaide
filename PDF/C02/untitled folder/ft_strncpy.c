#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	if (src == NULL || dest == NULL)
	{
		fprintf(stderr, "Error: src or dest is NULL\n");
	}

	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

	int	ft_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int	main(void)
{
	char src_test[] = "This is a test string";

	char *dest_test = malloc(ft_strlen(src_test) + 1);
	if	(dest_test == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Dest string:%s\n", ft_strncpy(dest_test, src_test, 5));
	printf("Dest string:%s\n", ft_strncpy(dest_test, src_test, 7));
	printf("Dest string:%s\n", ft_strncpy(dest_test, src_test, ft_strlen(src_test) + 1));

	free(dest_test);
	return (0);
}

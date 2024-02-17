
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
		
	if (src == NULL || dest == NULL)//检查src 和 dest是否为NULL-也就是检查两个指针是否没有指向任何有效的内存地址而成为一个空指针。
	{
		fprintf(stderr, "Error: src or dest is NULL\n");
		return (NULL);
	}
	
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}



	//写一个计算数组长度的函数： ft_strlen
	int	ft_strlen(char *str)
	{
		int i = 0;

		if (str == NULL)//检查str是否为NULL
		{
			return (0);
		}

		while(str[i] != '\0')
		{
			i++;
		}
		return	(i);
	}


int	main(void)
{	
	//自定义一个测试用字符串数组
	char test_src[] = "This is a test string";

	//使用动态分配内存函数malloc和刚写的计算数组长度函数ft_strlen,来进行动态内存分配
	char *test_dest = malloc(ft_strlen(test_src) + 1);
	if (test_dest == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	//直接使用 test_dest 和 test_src 而不是 &test_dest[0] 和 &test_src[0],因为数组名称已经是指向数组首元素的指针
	ft_strcpy(&test_dest[0], &test_src[0]);
	printf("%s\n", test_dest);

	free(test_dest);
	return(0);
}

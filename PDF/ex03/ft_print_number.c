#include <unistd.h>

void ft_print_number(void)
{
	int num = '0';

	while(num >= '0')
	{
		write(1, &num, 1);
		num++;
	}
}



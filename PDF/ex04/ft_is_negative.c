#include <unistd.h>

void ft_is_negative(int n)
{
	int n = 0;

	if (n<0)
	
		write(1, &'N', 1);
	else
		write(1, &'P', 1);

}



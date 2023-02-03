//#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	int number = 1;
	
	while (number <= n)
	{
		if (number == n)
			return(1);
		number *= 2;
	}
	return (0);
}

/*int main(void)
{
    printf("1 = YES, 0 = NO : %d\n", is_power_of_2(5));
    return (0);
}*/

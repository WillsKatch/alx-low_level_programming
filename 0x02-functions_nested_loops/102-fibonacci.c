#include <stdio.h>
/**
 * main - main func
 * Return: 0
 */
int main(void)
{
	int tab = 0;
	unsigned long fib = 0, fib1 = 1, sum;

	for (tab = 0; tab < 50; tab++)
	{
		sum = fib + fib1;
		printf("%lu", sum);

		fib = fib1;
		fib1 = sum;

		if (tab == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

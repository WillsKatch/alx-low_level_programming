#include <stdio.h>
/**
 * main - main func
 * Return: 0
 */
int main(void)
{
	unsigned long fib = 0, fib1 = 1, sum;
	float total;

	while (1)
	{
		sum = fib + fib1;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			total += sum;
		}
		fib = fib1;
		fib1 = sum;

	}
	printf("%.0f\n", total);
	return (0);
}

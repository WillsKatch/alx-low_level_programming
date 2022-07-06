#include "main.h"
/**
 * times_table - print times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, calc;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			calc = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (b == 0)
			{
				_putchar('0');
			}
		else if (calc >= 10)
			{
				_putchar((calc / 10) + '0');
				_putchar((calc % 10) + '0');
			}
			else if ((calc < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((calc % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

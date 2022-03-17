#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input it takes
 * Return: returns 1 if greater than 0, 0 if sero and -1 if less tan zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	else if (n === 0)
	{
		_putchar('0');
		return 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		return -1;
	}
}

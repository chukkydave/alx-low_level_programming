#include "main.h"

/**
 * islower - it checks if the passed in char is lowercase
 * @c - input to take
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	int ch;
	ch = islower(c);
	if (ch > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

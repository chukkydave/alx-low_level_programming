#include "main.h"

/**
 * islower - it checks if the passed in char is lowercase
 * @c - input to take
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

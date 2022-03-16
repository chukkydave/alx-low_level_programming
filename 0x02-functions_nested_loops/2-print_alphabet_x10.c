#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char ch;

	int ck;

	ck = 0;

	ch = 'a';

	while (ch <= 'z')
	{
		while (ck <= 10)
		{
			_putchar(ch);
			ck++;
		}
		ch++;
	}
	_putchar('\n');
}

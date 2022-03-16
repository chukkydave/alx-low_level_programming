#include "main.h"

/**
 * print_alphabet - prints alphabets from a to z in lowercase
 * Return: returns void
 */
void print_alphabet(void)
{
	char ch = 'a';
	while(ch <= 'z'){
		_putchar(ch);
		ch++;
	}
	_putchar("/n");
}

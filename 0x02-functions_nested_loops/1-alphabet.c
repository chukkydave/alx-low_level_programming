#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 * print_alphabet - prints alphabets from a to z in lowercase
 * Return: returns void
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char ch = 'a';
	while(ch <= 'z'){
		_putchar(ch);
		ch++;
	}
	_putchar("/n");
}

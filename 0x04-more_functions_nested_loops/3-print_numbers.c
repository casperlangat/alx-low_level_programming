#include "main.h"

/**
 * print_numbers - prints the num from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 10)

		_putchar(c++ + '0');

	_putchar('\n');
}

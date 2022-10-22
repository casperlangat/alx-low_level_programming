#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */

void print_numbers(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
_putchar((ch % 10) + '0');
}
_putchar('\n');
}

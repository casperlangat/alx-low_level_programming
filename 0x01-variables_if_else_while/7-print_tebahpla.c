#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char lv;

	for (lv <= 'z'; lv = 'a'; lv--)
		putchar(lv);

	putchar('\n');

	return (0);
}

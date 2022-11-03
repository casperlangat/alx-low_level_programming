#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer block of memmory to fill
 * Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (s == '\0')
		return (0);
	else
		return _strlen_recursion(s + 1)
}

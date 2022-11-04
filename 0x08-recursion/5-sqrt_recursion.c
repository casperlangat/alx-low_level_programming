#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion -  evaluate sqrt
 * @n: integer
 * Return: sqrt recursion
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	init square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

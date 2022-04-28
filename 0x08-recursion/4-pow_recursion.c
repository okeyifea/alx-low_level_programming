#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @n: the value of x is raise to the power of y
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y -1));
}

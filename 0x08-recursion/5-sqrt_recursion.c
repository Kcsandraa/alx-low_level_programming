#include "main.h"
/**
 * sqrt1 - returns the natural square root of a number
 * @x: The number 
 * @y: The squareroot
 * Return: square root of a number
 */
int sqrt1(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt1(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}

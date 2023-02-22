#include "main.h"

/**
 * _abs - calculate the absolute value of integer
 * @x: as integer argument
 * Return: absolute value
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-x);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * abs - calculate the absolute value of the number from zero.
 * @k: the integer to be converted.
 * Return: absolute value of the input number.
 */
int abs(int k)
{
	if (k < 0)
		k = k * -1;
	return (k);
}

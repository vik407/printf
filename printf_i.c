#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * powten - quick power of ten implementation
 * @n: exponent
 * Return: returns ten to exponent power
 */
int powten(int n)
{
	int retval;

	retval = 10;
	while (n > 0)
	{
		retval *= 10;
		n--;
	}
	return (retval);
}
/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
int op_i(int n)
{
	int sign, power, count;

	sign = 1;
	count = 0;
	power = powten(8);
	if (n > 0)
	{
		n = n * -1;
		sign = sign * -1;
	}
	if (n != 0)
	{
		while (n / power == 0)
			power /= 10;
		if (sign == 1)
			_putchar('-');
		while (power >= 1)
		{
			_putchar(-(n / power) + '0');
			n %= power;
			power /= 10;
			count++;
		}
	}
	else
		_putchar('0');
	return (count);
}

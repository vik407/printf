#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
int op_i(va_list n)
{
	int a, p10 = 1, len = 0, res;

	a = va_arg(n, int);
	if (a < 0)
	{
		len = len + _putchar('-');
		a = a * -1;
	}
	else
		a = a;
	while (a / p10 > 9)
		p10 *= 10;
	while (p10 != 0)
	{
		len = len + 1;
		res = a / p10;
		a = a % p10;
		_putchar(res + '0');
		p10 = p10 / 10;
	}
	return (len);
}

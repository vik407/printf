#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * op_i - prints integers using putchar
 * @n: integer to print
 * Return: void
 */
int op_i(va_list n)
{
	int a, k, p10 = 1, len = 0;

	a = va_arg(n, int);
	k = a;
	if (a < 0)
	{
		len = len + _putchar('-');
		p10 = p10 * -1;
	}
	while (k > 9 || k < -9)
	{
		k = k / 10;
		p10 *= 10;
	}
	while (p10 > 9 || p10 < -9)
	{
		_putchar((a / p10) % 10 + '0');
		p10 = p10 / 10;
		len++;
	}
	if (a < 0)
		_putchar((a % 10) * -1 + '0');
	else
		_putchar((a % 10) + '0');
	return (len + 1);
}

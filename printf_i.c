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
	int a, p10 = 1, len = 0;
	unsigned int res;

	a = va_arg(n, int);
	/* Menos de 0 es negativo */
	if (a < 0)
	{
		len = len + _putchar('-');
		res = a * -1;
	}
	else
		res = a;
	/* Potencia 10 */
	while (res / p10 > 9)
		p10 *= 10;
	/* Mientras p10 es diferente de 0 */
	while (p10 != 0)
	{
		len = len + _putchar(res / p10 + '0');
		/* Todo tan chévere hasta error de puntero aquí me puede el conocimiento
		* printf_i.c:30:5: error: assignment makes pointer from integer
		* without a cast [-Werror] -> n = res % p10;*/
		a = res % p10;
		/* Posicionar https://www.helpingwithmath.com/by_subject/decimals/powers-of-10-5nbt2.htm */
		p10 = p10 / 10;
	}
	return (len);
}

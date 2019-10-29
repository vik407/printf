#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0, len1 = 0;

	len = _printf("%i\n", -123);
	printf("%i\n", len);
	len1 = printf("%i\n", -123);
	_printf("%i\n", len1);
	len = _printf("%i\n", NULL);
	printf("%i\n", len);
	len1 = printf("%i\n", NULL);
	_printf("%i\n", len1);
	len = _printf("_INT_MIN %i\n", -2147483648);
	printf("%i\n", len);
	len1 = printf("_INT_MIN %i\n", -2147483648);
	_printf("%i\n", len1);
	_printf("%i\n", NULL);
	printf("%i\n", NULL);
	_printf("_INT_MIN %i\n", -2147483648);
	printf("INT_MIN %i\n", -2147483648);
	_printf("_INT_MIN + 1 %i\n", -2147483649);
	printf("INT_MIN + 1 %i\n", -2147483649);
	_printf("_INT_MAX %i\n", 2147483647);
	printf("INT_MAX %i\n", 2147483647);
	_printf("%i\n");
	printf("%i\n");
	_printf("%i\n", 0);
	printf("%i\n", 0);
	_printf("%i\n", 'a');
	printf("%i\n", 'a');
	return (0);
}

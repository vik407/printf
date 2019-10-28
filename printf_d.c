#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 *rangeof - Recognize a value to print.
 *@n: Number to convert.
 *Return: An integer.
 */
int rangeof(int n)
{
	int number = n;
	char digit, negative = '-';
	if (number < 0)
	{
		number = -number;
		write(1,&negative,1);
	}


	if (number / 10 > 0)
		rangeof(number/10);
	digit = (number%10) +'0';
	write(1, &digit, 1);
	return (number);
}

/**
 *op_d - Prints a integer.
 *@d: Character to integer.
 *Return: An integer.
 */

int op_d(va_list d)

{
	int a;
	a = va_arg(d, int);
	rangeof (a);
	return (0);
}

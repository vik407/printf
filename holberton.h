#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formats - structre to handle the different formats
 * @f: the format
 * @func: the function pointer
 */
typedef struct formats
{
	char *f;
	int (*func)(va_list);
} forma_t;

int _printf(const char *format, ...);
int _putchar(char c);
int format_h(const char *format, forma_t *stc_ar, va_list arg);

/* Single prototypes as calc task */
int op_c(va_list c);
int op_s(va_list s);
int rangeof(int n);
int rangeofInt(int n);
int op_d(va_list d);
int op_i(va_list n);
int powten(int n);
#endif

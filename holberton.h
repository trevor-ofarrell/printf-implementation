#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct formatspec- Struct for specifiers
 *
 * @specifiers: The operator
 * @f: The function associated
 */
typedef struct formatspecs
{
	char *dt;
	void (*fp)(va_list);
} data_t;

#endif

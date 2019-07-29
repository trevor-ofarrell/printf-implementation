#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * p_mod - print modules
 * @list: list of arguments
 * Return: character amount.
 */
int p_mod(va_list list)
{
	(void)list;
	_writeChar('%');
	return (1);
}
/**
 * _printf - printf implemntaion
 * @format: const char
 * Return: arguments
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list list;

	op_t op[] = {
		{"c", p_char},
		{"i", p_num},
		{"%", p_mod},
		{"f", p_dub},
		{"s", p_str},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		while (op[j].ch)
		{
			if (*op[j].ch == format[i])
			{
				op[j].ptr(list);
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
	return (0);
}

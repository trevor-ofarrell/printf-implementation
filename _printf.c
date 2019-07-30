#include "holberton.h"
/**
 * _printf - printf implemntaion
 * @format: const char
 * Return: arguments
 */
int printNsearch(const char *format, op_t op[], va_list list);

int _printf(const char *format, ...)
{
	int char_list;
	va_list list;
	op_t op[] = {
		{"c", p_char},
		{"d", p_int},
		{"i", p_int},
		{"%", p_mod},
		{"f", p_dub},
		{"s", p_str},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);
	char_list = printNsearch(format, op, list);
	va_end(list);
	return (char_list);
}

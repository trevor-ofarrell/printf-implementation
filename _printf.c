#include "holberton.h"
/**
 * _printf - printf implementation
 * @format: const char pointer
 * Return: ret
 */
int _printf(const char *format, ...)
{
	int ret;
	va_list list;
	op_t op[] = {
		{"c", p_char},
		{"d", p_int},
		{"i", p_int},
		{"u", p_uint},
		{"%", p_mod},
		{"f", p_dub},
		{"s", p_str},
		{"R", rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);
	ret = printNsearch(format, op, list);
	va_end(list);
	return (ret);
}

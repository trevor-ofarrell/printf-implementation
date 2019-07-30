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
	int i = 0, j = 0, r, pc;
	va_list list;
	va_list arg_list;

	op_t op[] = {
		{"c", p_char},
		{"i", p_int},
		{"%", p_mod},
		{"f", p_dub},
		{"s", p_str},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			while (op[j].ch)
			{
				if (format[i + 1] == op[j].ch[0])
				{
					r = op[j].ptr(arg_list);
					if (r == -1)
						return (-1);
					pc = pc + r;
					break;
				}
			}
			if (op[j].ch == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_writeChar(format[i]);
					_writeChar(format[i + 1]);
					pc += 2;
				}
				else
					return (-1);
				j = 0;
				j++;
			}
			i++;
		}
		else
		{
		_writeChar(format[i]);
		pc++;
		}
	}
	_writeChar('\n');
	va_end(list);
	va_end(arg_list);
	return (pc);
}

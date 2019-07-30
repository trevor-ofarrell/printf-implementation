#include "holberton.h"
/**
 * _printf - printf implemntaion
 * @format: const char
 * Return: arguments
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, r, pc = 0;
	va_list list;

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
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			for (j = 0; op[j].ch != NULL; j++)
			{
				if (format[i + 1] == op[j].ch[0])
				{
					r = op[j].ptr(list);
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
					_putchar(format[i]);
					_putchar(format[i + 1]);
					pc += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
		_putchar(format[i]);
		pc++;
		i++;
		}
	}
	va_end(list);
	return (pc);
}

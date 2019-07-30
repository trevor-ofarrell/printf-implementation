#include "holberton.h"
/**
 * printNsearch - printf implemntaion
 * @format: const char
 * @op: array list
 * @list: va_list
 * Return: arguments
 */
int printNsearch(const char *format, op_t op[], va_list list)
{
	int i = 0, j = 0, r, c = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
		}
		else if (format[i] == '%')
		{
			for (j = 0; op[j].ch; j++)
			{
				if (format[i + 1] == op[j].ch[0])
				{
					r = op[j].ptr(list);
					if (r == -1)
					return (-1);
					c = c + r;
					break;
				}
			}
			if (!op[j].ch && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
				}
				else
					return (-1);
			} i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		} c++;
	}
	return (c);
}

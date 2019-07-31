#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * p_char - prints char
 * @list: va list member
 * Return: Always 0.
 */
int p_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * p_int - print number.
 * @list: valist
 * Return: Always 0.
 */
int p_int(va_list list)
{
	int f;
	int len = 0;

	f = va_arg(list, int);

	printnum(&len, f);
	return (len);
}
/**
 * p_dub - print double.
 * @list: valist
 * Return: Always 0.
 */
int p_dub(va_list list)
{
	_putchar(va_arg(list, double));
	return (1);
}
/**
 * p_str - print string.
 * @list: valist
 * Return: Always 0.
 */
int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (1);
}
/**
 * p_uint - print string.
 * @list: valist
 * Return: Always 0.
 */
int p_uint(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_unsignednum(n));
	if (n < 1)
		return (-1);
	return (print_unsignednum(n));
}

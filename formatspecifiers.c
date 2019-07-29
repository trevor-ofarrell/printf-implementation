#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_mod - Prints modulus
 * @list: list of arguments
 * Return: character amount.
 */
int print_mod(va_list list)
{
	(void)list;
	_writeChar('%');
        return (1);
}
/**
 * p_char - prints char
 * @list: va list member
 * Return: Always 0.
 */
int p_char(va_list list)
{
	_writeChar(va_arg(list, int));
	return (1);
}
/**
 * p_num - print number.
 * @list: valist
 * Return: Always 0.
 */
int p_num(va_list list)
{
	_writeChar(va_arg(list, int));
	return (1);
}
/**
 * p_dub - print double.
 * @list: valist
 * Return: Always 0.
 */
int p_dub(va_list list)
{
	_writeChar(va_arg(list, double));
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
		str = "(nil)";
		return(-1);
	}
	for (i = 0; str[i] != '\0'; i++)
		_writeChar(str[i]);
	return (1);
}

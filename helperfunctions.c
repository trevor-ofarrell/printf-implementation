#include "holberton.h"
#include "unistd.h"
/**
 * _putchar - print chars
 * @c: char
 *
 * Return: printed chars
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printnum - print number.
 * @m: int
 * @ptr: int
 * Return: Always 0.
 */
int printnum(int *ptr, int m)
{
	int len = 0;
	unsigned int n = m;

	if (m < 0)
	{
		len += _putchar('-');
		n = -m;
		(*ptr)++;
	}
	if (n / 10)
	{
		printnum(ptr, n / 10);
	}
	len += _putchar((n % 10) + '0');
	(*ptr)++;
	return (len);
}
/**
 * print_unsignednum - print a unsigned int
 *
 * @n: int
 * Return: 0
 */
int print_unsignednum(int n)
{
	int d = 1, len = 0;
	unsigned int num = n;

	while (num / d >= 8)
	{
		d = d * 10;
	}
	while (d != 0)
	{
		len = len + _putchar('0' + num / d);
		num = num % d;
		d = d / 10;
	}
	return (len);

}
/**
 * rot13 - convert string to rot13.
 * @list: va_list
 * Return: len.
 */
int rot13(va_list list)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char *s;

	s = va_arg(list, char *);
	if (*s == 0)
		return (-1);
	for (; *s != '\0'; s++)
	{
		for (i = 0; alpha[i] != '\0'; i++)
		{
			if (*s == alpha[i])
			{
				_putchar(rot13[i]);
				break;
			}
		}
	}
	return (i);
}

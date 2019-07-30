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
 * Return: Always 0.
 */
int printnum(int m)
{
	unsigned int n;

	if (m < 0)
	{
		_putchar('-');
		n = -m;
	}
	n = m;
	if (n / 10)
	{
		printnum(n / 10);
	}
	_putchar((n % 10) + '0');
	return (0);
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

#include "holberton.h"
#include "unistd.h"
int _writeChar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_num - prints an integer.
 * @n:  integer
 * Description: using recurision of a function we can print the number.
 * Return: Always 0.
 */
void print_num(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m >= 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}

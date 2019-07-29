#include "holberton.h"
#include "unistd.h"
int _writeChar(char c)
{
	return (write(1, &c, 1));
}
/**
 * p_num - print number.
 * @list: valist
 * Return: Always 0.
 */
int printnum(int m)
{
	unsigned int n;

	if (m < 0)
	{
		_writeChar('-');
		n = -m;
	}
	n = m;
	if (n / 10)
	{
		printnum(n / 10);
	}
	_writeChar((n % 10) + '0');
	return (0);
}

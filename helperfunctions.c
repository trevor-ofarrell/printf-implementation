#include "holberton.h"
#include "unistd.h"
int _writeChar(char c)
{
	return (write(1, &c, 1));
}

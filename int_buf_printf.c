#include "main.h"

/**
 * _i_buffer_ - insert int buffer
 * @num: the integer giving
 * @buffer: buffer
 * @index: actual index
 * Return: Always index
 */

int _i_buffer_(int num, char *buffer, int index)
{
	unsigned int i, sign = 0, a, b = 1, j = 0;

	if (num < 0)
	{
		sign = 1;
		i = num * -1;
		index = _buffer_('-', buffer, index);
	}
	if (sign == 0)
		i = num;
	a = i;
	while (a > 9)
	{
		a /= 10;
		b *= 10;
	}
	while (b > 0)
	{
		index = _buffer_(((i / b) % 10) + '0', buffer, index);
		b /= 10;
		j++;
	}
	return (index);
}

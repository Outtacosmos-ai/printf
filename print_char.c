#include "main.h"

/**
 * _buffer_ - print_char
 * @c: charactere
 * @buffer: the String giving
 * @index: actual index
 *
 * Return: always index
 */

int _buffer_(char c, char *buffer, int index)
{
	if (index ==  1024)
	{
		print_buf(buffer, index);
		index = 0;
	}
	buffer[index] = c;
	index++;
	return (index);
}

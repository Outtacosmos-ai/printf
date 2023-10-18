#include "main.h"

/**
 * _s_buffer_ - add a string to buf
 * @format: pointer string
 * @buf: the String giving
 * @index: actual index
 * Return: number of char printed
 */

int _s_buffer_(char *format, char *buf, int index)
{
	unsigned int i = 0, j = 0;
	char not[] = "(null)";

	if (format == NULL)
	{
		while (not[j] != '\0')
		{
			index = _buffer_(not[j], buf, index);
			j++;
		}
		return (j);
	}
	while (format[i] != '\0')
	{
		index = _buffer_(format[i], buf, index);
		i++;
	}
	return (index);
}

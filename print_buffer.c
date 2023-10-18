#include "main.h"

/**
 * print_buf - print a String
 *
 * @buffer: The String
 * @index: actual index
 * Return: Always integer
 */

int print_buf(char *buffer, int index)
{
	return (write(1, buffer, index));
}

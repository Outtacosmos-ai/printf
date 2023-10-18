#include "main.h"
/**
 * print_13 - print_13
 * @format: string
 * @buffer: the String Using
 * @index: integer giving
 * Return: always index
 */
int print_13(char *format, char *buffer, int index)
{
	int a = 0, b = 0;
	char ab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (format[a])
	{
		for (b = 0; b < 52; b++)
		{
			if (ab[b] == format[b])
			{
				index = _buffer_(rot[b], buffer, index);
				break;
			}
		}
		a++;
	}
	return (index);
}

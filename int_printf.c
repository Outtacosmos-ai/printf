#include "main.h"
#include <stdarg.h>

/**
 * _printf - Returns: the number of characters printed
 * @format: is a character string
 * Return: always n.
 */
int _printf(const char *format, ...)
{
	unsigned int n = 0, i = 0, j = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	if (!format || (format[n] == '%' && format[n + 1] == '\0'))
		return (-1);
	if (format[n] == '\0')
		return (0);

	str = malloc(1024);

	if (str == NULL)
		return (-1);
	while (format[n] != '\0')
	{
		if (format[n] == '%')
		{
			switch (format[n + 1])
			{
			case '\0':
				print_buf(str, i);
				free(str);
				va_end(ap);
				break;
			case '%':
				i = _buffer_('%', str, i);
				n++;
				break;
			case 'c':
				i = _buffer_(va_arg(ap, int), str, i);
				n++;
				break;
			case 's':
				i = _s_buffer_(va_arg(ap, char *), str, i);
				n++;
				break;
			case 'i':
				i = _i_buffer_(va_arg(ap, int), str, i);
				n++;
				break;
			case 'd':
				i = _i_buffer_(va_arg(ap, int), str, i);
				n++;
				break;
			case 'R':
				i = print_13(va_arg(ap, char *), str, i);
				n++;
				break;
			default:
				i = _buffer_(format[n], str, i);
				break;
			}
		}
		else
			i = _buffer_(format[n], str, i);
		n++;
	}
	print_buf(str, i);
	free(str);
	va_end(ap);
	j += i;
	return (j);
}

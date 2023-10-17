#include "main.h"
/**
 * printf_string - Print a string.
 * @val: The argument containing the string to be printed.
 *
 * This function takes a string from the va_list and prints it to stdout. If the
 * string is NULL, it prints "(null)".
 *
 * Return: The length of the string printed.
 */
int printf_string(va_list val)
{
char *str;
int i;
int length;

str = va_arg(val, char *);
if (str == NULL)
{
str = "(null)";
length = _strlen(str);
for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
else
{
length = _strlen(str);
for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
}

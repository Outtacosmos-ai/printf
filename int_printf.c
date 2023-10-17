#ifndef MAIN_H
#include "main.h"
#ifndef MAIN_H
#include "main.h"

/**
 * printf_char - Print a character.
 * @val: Arguments list containing the character to print.
 *
 * This function takes a character from the va_list and prints it to stdout.
 *
 * Return: 1, the number of characters printed.
 */
int printf_char(va_list val)
{
char str;
str = va_arg(val, int);
_putchar(str);
return (1);
}

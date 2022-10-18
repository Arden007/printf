#include "main.h"
/**
 * print_c - Prints a single character
 * @c: character to be print
 * Return: Always 1 (Success)
 */

int print_c(va_list c)
{
    char chara = (char)va_arg(c, int);

    _putchar(chara);
    return (1);
}
#include "main.h"
/**
 * print_R - Prints a string in rot13 format
 * @R: string to printed in rot13 format
 * Return: number of printed characters
 */

int print_R(va_list R)
{
    char *str;
    unsigned int i, j;
    int count = 0;
    char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    str = va_arg(R, char *);
    if (str == NULL)
        str = "(ahyy)";
    for (i = 0; str[i]; i++)
    {
        for (j = 0; in[j]; j++)
        {
            if (in[j] == str[i])
            {
                _putchar(out[j]);
                count++;
                break;
            }
        }
        if (!in[j])
        {
            _putchar(str[i]);
            count++;
        }
    }
    return (count);
}
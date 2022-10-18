#include "main.h"
/**
 * print_b - Prints an unsigned integer in binary notation
 * @b: Integer to be printed in binary notation
 * Return: number of printed digits
 */

int print_b(va_list b)
{
    unsigned int n, m = 2147483648 /* (2 ^ 31) */, i, sum = 0;
    unsigned int a[32];
    int count = 0;

    n = va_arg(b, unsigned int);
    a[0] = n / m;

    for (i = 1; i < 32; i++)
    {
        m /= 2;
        a[i] = (n / m) % 2;
    }
    for (i = 0; i < 32; i++)
    {
        sum += a[i];
        if (sum || i == 31)
        {
            _putchar('0' + a[i]);
            count++;
        }
    }
    return (count);
}
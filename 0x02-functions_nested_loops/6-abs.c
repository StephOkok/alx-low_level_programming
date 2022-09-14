#include "main.h"
/**
 * _abs - function that computes the absolute value of int
 * @x: integer used for the argument
 * Return: always 0 when successful
 */

int _abs(int x)
{
    if (x > 0 || x == 0)
    {
        putchar(x);
        return (x);
    }
    else
    putchar(x);
    return (x * -1);
    
}

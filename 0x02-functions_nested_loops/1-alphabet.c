#include "main.h"

/**
 * main - entrypoint of the code
 * description: printing alphabet letters
 * Return: Always 0 if successful
 */

void print_alphabet(void)
{
    char x;
    
    for (x = 'a'; x <= 'z'; x++)
    {
        _putchar(x);
    }
    _putchar('\n');
}

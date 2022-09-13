#include "main.h"

/**
 * main - entrypoint of the code
 * description : printing _putchar
 * Return : Always 0 if successful
 */

void print_alphabet(void);

int main(void)
{
    print_alphabet();

    int x;
    for(int x = 'a'; x<='z'; x++);
    {
    putchar(x);
    }
    putchar('\n');
    return(0);
}

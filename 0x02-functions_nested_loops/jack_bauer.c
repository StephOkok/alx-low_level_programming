#include "main.h"
/**
 * jack_bauer - function to print every minute of the day fr0m 00:00 to 23:59
 * void: null return
 * Return: zero always success
 */

void jack_bauer(void)
{
	int hours = 0;
    	int minutes = 0;
    	int hours_remainder;
    	int mins_remainder;

    	while (hours <= 23)
    	{
        	while (minutes <= 59)
        	{
            	hours_remainder = hours % 10;
            	putchar (hours / 10 + '0');
            	putchar (hours_remainder + '0');
            	putchar (':');
            	putchar (minutes / 10 + '0');
            	putchar (mins_remainder + '0');
            	minutes++;
            	putchar ('\n');
        	}
        	hours++;
    	}
}

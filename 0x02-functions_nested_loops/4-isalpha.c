#include "main.h"

/**
 * _isalpha - function to check if it's alphabetic
 * Return : 0 always successful
 */

int _isalpha(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if(c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
		return (0);
}

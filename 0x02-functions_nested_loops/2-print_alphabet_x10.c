#include "main.h"

/**
* print_alphabet_x10 – function that prints lowercase alphabet
*
* using _putchar to print alphabet
*/

void print_alphabet_x10(void)

{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}



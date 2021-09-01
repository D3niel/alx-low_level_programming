#include "main.h"

#include <stdbool.h>

/**
* print_alphabet – function that prints lowercase alphabet
*/

void print_alphabet_x10(void)

{
	int i = 97;
	bool a = true;

	while (a)
	{
	_putchar (i);

		if (i == 122)
		{
			a = false;
		}
	}
	i++;
	for (i = 0; i <11; i++)
	{
		_putchar ('\n');
	}
}

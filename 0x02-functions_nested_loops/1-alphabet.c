#include "main.h"

/**
 *print_alphabet: prints alphabet in lowercase followed by new line using _putchar only.
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);

	_putchar('\n');
}

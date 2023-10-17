#include "../main.h"

/**
 * buffer_print - print given buffer to stdout
 * @buffer: buffer to print
 * @nbytes: number of bytes to print
 *
 * Return: nbytes
 */

int buffer_print(char buffer[], unsigned int nbytes)
{
	write(1, buffer, nbytes);
	return (nbytes);
}
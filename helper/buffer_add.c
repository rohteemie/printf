#include "../main.h"

/**
 * buffer_add - adds a string to buffer
 * @buffer: buffer to fill
 * @str: str to add
 * @buffer_pos: pointer to buffer first empty position
 *
 * Return: if buffer filled and emptyed return number of printed char
 * else 0
 */

int buffer_add(char buffer[], char *str, unsigned int *buffer_pos)
{
	int i = 0;
	unsigned int count = 0;
	unsigned int pos = *buffer_pos;
	unsigned int size = BUFFER_SIZE;

	while (str && str[i])
	{
		if (pos == size)
		{
			count += buffer_print(buffer, pos);
			pos = 0;
		}
		buffer[pos++] = str[i++];
	}
	*buffer_pos = pos;
	return (count);
}
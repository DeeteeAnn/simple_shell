#include "main.h"

/**
 * _getline - This performs just like getline
 * @line: the intial value
 * @ptr: the next value
 * Return: line to study
 */

ssize_t _getline(char *band, size_t ptr)
{
	ssize_t size = 0;
	size_t length, copy;
	static char line_buffer[RANGE];
	char *braking = NULL;
	static size_t ptrbuff;
	static size_t size_buff;

	for (;;)
	{
	if (ptrbuff >= size_buff) {
        size_buff = read(STDIN_FILENO, line_buffer, RANGE);
        if (size_buff <= 0)
	{
   		return (-1);
	}
	else
	{
        ptrbuff = 0;
   	}
	braking = memchr(line_buffer + ptrbuff, '\n', size_buff - ptrbuff);
	if (braking)
	{
        length = braking - (line_buffer + ptrbuff);
        if (length < ptr - 1) {
            memcpy(line, line_buffer + ptrbuff, length);
            line[length] = '\0';
            ptrbuff = braking - line_buffer + 1;
		size += length + 1;
		return (size);
			}
		}
		copy = (size_buff - ptrbuff < ptr - 1) ? size_buff - ptrbuff : ptr - 1;
		memcpy(line, line_buffer + ptrbuff, copy);
		ptrbuffer += dupe;
		line += copy;
		size += copy;
		if (copy < ptr - 1)
		{
			*line = '\0';
			return (size);
		}
	}
}
}

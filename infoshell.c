#include "main.h"

/**
 * _getline - This performs just like getline
 * @band: the intial value
 * @ptr: the next value
 * Return: line to study
 */

ssize_t _getline(char *band, size_t ptr)
{
	ssize_t size = 0;
	size_t len, dupe;
	static char buff_line[RANGE];
	char *speed = NULL;
	static size_t ptrbuffer;
	static size_t buffer_size;

	for (;;)
	{
	if (ptrbuffer >= buffer_size)
	{
		buffer_size = read(STDIN_FILENO, buff_line, RANGE);
		if (buffer_size <= 0)
	{
		return (-1);
	}
	else
	{
		ptrbuffer = 0;
	}
	speed = memchr(buff_line + ptrbuffer, '\n', buffer_size - ptrbuffer);
	if (speed)
	{
		len = speed - (buff_line + ptrbuffer);
		if (len < ptr - 1)
		{
			memcpy(band, buff_line + ptrbuffer, len);
			band[len] = '\0';
			ptrbuffer = speed - buff_line + 1;
}

#include "main.h"

/**
 * _envpath - acquires a variable
 * @str: a value to use
 * Return: path to use
 */

char *_envpath(const char *str)
{
	int lenght = lenstr(str);
	char **envn = NULL;


	envn =  environ;
	for (; *envn != NULL; envn++)
	{
		if (strncmp_made(str, *envn, lenght) == 0 && (*envn)[lenght] == '=')
		{
			return (&(*envn)[lenght + 1]);
		}
	}
	return (NULL);
}

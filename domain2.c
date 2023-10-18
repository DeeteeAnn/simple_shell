#include "main.h"

/**
 * _envpath - acquires a variable
 * @str: a value to use
 * Return: path to use
 */

char *_envpath(const char *str)
{
	int len = lenstr(str);
	char **ptrenv = NULL;


	ptrenv =  environ;
	for (; *ptrenv != NULL; ptrenv++)
	{
		if (strncmp_made(str, *ptrenv, len) == 0 && (*ptrenv)[len] == '=')
		{
			return (&(*ptrenv)[len + 1]);
		}
	}
	return (NULL);
}

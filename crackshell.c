#include "main.h"

/**
 * split_str- divides into two strings
 * @str: token to be used in string
 * @delim: parameters to split
 * Return: a divided string
 */

char **split_str(char *str, const char *delim)
{
	char *indexarg;
	int index = 0, dm;
	char **val = NULL;
	char *indexcpy = _strdup(str);

	indexcpy = strtok(str, delim);

	for (indexarg = strtok(indexarg, delim); indexarg != NULL; indexarg = strtok(NULL, delim))
	{
		index++;
	}

	val = (char **)malloc(sizeof(char *) * (index + 1));
	if (val == NULL)
	{
		perror("allocating memory is fatal");
		exit(98);
	}
	indexarg = strtok(indexcpy, delim);
	dm = 0;
	while (indexarg != NULL)
	{
		args[dm] = _strdup(indexarg);
		indexarg = strtok(NULL, delim);
		dm++;
	}
	args[index] = NULL;
	free(indexcpy);
	return (args);
}

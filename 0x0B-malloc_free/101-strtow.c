#include <stdlib.h>
#include <string.h>

/**
  * count_words - Count the number of words in a string
  * @str: The string
  *
  * Return: The number of words in the string
  */

int count_words(char *str)
{
	int words;

	words = 0;

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			while (*str != ' ' && *str != '\0')
				str++;

			words++;
		}
		else
		{
			str++;
		}

	}

	return (words);
}

/**
  * word_mem_alloc - Allocate memory for words in a string
  * and store them in an array of strings
  * @str: The input string
  * @p: A pointer to an array of strings to store the words
  */

void word_mem_alloc(char *str, char **p)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		int w_length;

		w_length = 0;
		if (*str != ' ')
		{
			while (*str != ' ' && *str != '\0')
			{
				w_length++;
				str++;
			}

			p[i] = malloc(sizeof(char) * (w_length + 1));

			if (p[i] == NULL)
			{
				int j;

				for (j = 0; j < i; j++)
					free(p[j]);
				free(p);

				return;

			}

			strncpy(p[i], str - w_length, w_length);
			p[i][w_length] = '\0';
			i++;
		}
		else
		{
			str++;
		}
	}
}

/**
  * strtow - Split a string into an array of words
  *@str: The input string
  *
  * Return: An array of wrods
  */

char **strtow(char *str)
{
	char **p;
	int height;

	if (str == NULL || *str == '\0')
		return (NULL);

	height = count_words(str);

	p = malloc(sizeof(char *) * (height + 1));

	if (p == NULL)
		return (NULL);

	p[height] = NULL;

	word_mem_alloc(str, p);

	return (p);
}

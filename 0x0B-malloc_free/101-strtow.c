#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 50

char **strtow(char *str) 
{
	unsigned int i;
	int j, num_words, in_word, word_index, word_start;
	char *word, **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	num_words = 0;
	in_word = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;}
		else
		{
			if (in_word == 0)
			{
				num_words++;
				in_word = 1;
			}
		}
	}
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_start = 0;
	in_word = 0;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (in_word)
			{
				int word_length = i - word_start;
				if (word_length > MAX_WORD_LENGTH)
				{
					for (j = 0; j < num_words; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				word = (char *)malloc(sizeof(char) * (word_length + 1));
				if (word == NULL)
				{
					for (j = 0; j < num_words; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(word, str + word_start, word_length);
				word[word_length] = '\0';
				words[word_index++] = word;
				in_word = 0;
			}
			word_start = i + 1;
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
			}
		}
	}
	words[num_words] = NULL;
	return (words);
}

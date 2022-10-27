#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @strng: represents the string
 * Return: pointer to the string
 */
char *cap_string(char *strng)
{
	int j = 0;

	while (strng[j])
	{
		while (!(strng[j] >= 'a' && strng[j] <= 'z'
	))
			j++;
		if (strng[j - 1] == ' ' ||
			strng[j - 1] == '\t' ||
			strng[j - 1] == '\n' ||
			strng[j - 1] == ',' ||
			strng[j - 1] == ';' ||
			strng[j - 1] == '.' ||
			strng[j - 1] == '!' ||
			strng[j - 1] == '?' ||
			strng[j - 1] == '"' ||
			strng[j - 1] == '(' ||
			strng[j - 1] == ')' ||
			strng[j - 1] == '{' ||
			strng[j - 1] == '}' ||
			j == 0)
			strng[j] -= 32;
		j++;
	}
	return (strng);
}

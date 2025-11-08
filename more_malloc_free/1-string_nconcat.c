#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int i, j;
	int len1 = 0, len2 = 0;
	int s2_copy_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Determine number of characters to copy from s2 */
	if (n >= (unsigned int)len2)
		s2_copy_len = len2;
	else
		s2_copy_len = n;

	/* Allocate memory for new string (+1 for null terminator) */
	new_str = malloc(sizeof(char) * (len1 + s2_copy_len + 1));
	if (new_str == NULL)
		return (NULL);

	/* Copy s1 */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* Copy first s2_copy_len characters from s2 */
	for (j = 0; j < s2_copy_len; j++)
		new_str[i + j] = s2[j];

	/* Null-terminate */
	new_str[i + j] = '\0';

	return (new_str);
}

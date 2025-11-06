#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to newly allocated memory containing s1 + s2,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
    char *new_str;
    int i, j;
    int len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    new_str = malloc((len1 + len2 + 1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; s1[i] != '\0'; i++)
        new_str[i] = s1[i];

    for (j = 0; s2[j] != '\0'; j++, i++)
        new_str[i] = s2[j];

    new_str[i] = '\0';

    return (new_str);
}

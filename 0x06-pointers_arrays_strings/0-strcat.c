/**
 * _strcat - Copies a string including the null-terminator.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
		*dest = '\0';
return  (original_dest);
}

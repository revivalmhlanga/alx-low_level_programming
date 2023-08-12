#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to be memory area s
 */
char *_memset(char*s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
/**
 * *_calloc - allocates memory for an arrey
 * @nmemb: number of the ellement in an arrey 
 * @size: size of each element
 *
 * Return: pointer to be allocated by memory
 */ 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(size * nmemb);
	
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);

}

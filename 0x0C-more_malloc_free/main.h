#include <stdio.h>

/**
 * _putchar - write char to output
 * *string_nconcat - concatenates two strings
 * *_calloc - allocates memory for an array
 * *array_range - creates an arrays of integers
 * *_realloc - reallocates memory block using malloc and free
 * *malloc_checked - allocates memory using malloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *malloc_checked(unsigned int b);

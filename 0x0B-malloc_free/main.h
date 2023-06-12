#include "stdio.h"

/**
 * _putchar - writes cahracter to the ouput
 * *create_array -  creates an array of chars, and initializes it with a specific char 
 * *_strdup - returns a pointer to a newly allocated space in memory
 * *str_concat - concatenates two strings
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function
 * *argstostr -  concatenates all the arguments of your program
 * **strtow - splits a string into words
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _putchar(char c);

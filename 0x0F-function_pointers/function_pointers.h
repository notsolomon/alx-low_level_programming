#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdio.h>

/**
 * _putchar - writes a charachter to the standard output
 * print_name - prints a name
 * array-iterator - executes a function given as a parm
 * int_index - searches for an int
 */

int _putchar(char);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif

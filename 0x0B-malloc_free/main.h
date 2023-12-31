#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void _putchar(char ch);
char *str_concat(char *s1, char *s2);
int gitlen(char *s);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);


#endif

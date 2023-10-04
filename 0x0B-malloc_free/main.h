#ifndef MAIN_H
#define MAIN_H

int _putchar(int character);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void char_replace(char *s, int length, char old, char new);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif 

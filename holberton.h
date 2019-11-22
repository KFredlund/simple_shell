#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int main(void);
int _putchar(char c);
ssize_t _getline(char *line);
void _puts_recursion(char *s);
int _sqrt_nums(int n, int d);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void array_iterator(int *array, size_t size, void (*action)(int));
void free_list(list_t *head);
size_t list_len(const list_t *h);
int print_base16(void);
size_t print_list(const list_t *h);
int wildcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _atoi(char *s);
void rev_string(char *s);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
unsigned int _strspn(char *s, char *accept);
char *string_toupper(char *str);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif

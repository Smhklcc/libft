#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list 
{
	void	*content;
	struct s_list *next;
}  t_list;

typedef struct s_split_next
{
	size_t	start;

	size_t length;

}	t_split_next;

size_t ft_strlen(char *str);

int ft_isalpha(int c);

int ft_isdigit(int s);

int ft_ascii(int s);

int ft_isprint(int s);

void *ft_memset(void *b,int c, size_t len);

void ft_bzero(void *d, size_t len);

void ft_memcpy(void *d1, const void *d2, size_t len);

void *ft_memmove(void *dest, const void *src, size_t n);

size_t ft_strlcpy(char *d1, const char *d2, size_t l);

size_t ft_strlcat(char *dst, const char *src, size_t dsize);

int ft_toupper(int alpha);

int ft_tolower(int alpha);

char *ft_strchr(const char *d, int l);

char *ft_strrchar(const char *d, int l);

void *memchr(const void *ptr, int c, size_t n);

char *ft_strnstr(const char *big, const char *little, size_t len);

int ft_atoi(const char *str);

void *ft_calloc(size_t count, size_t size);

char *ft_strdup(const char *s);

#endif

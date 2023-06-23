#ifndef LIBFT_H
#define LIBFT_H

#define OK 1
#define NG 0


#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char* ft_strchr(const char *s,int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void* ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void* ft_memcpy(void* buf1, const void *buf2, size_t n);
char* ft_strrchr(const char *s, int c);
void* ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_atoi(const char *str);
void * ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char* ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
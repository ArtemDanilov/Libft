#ifndef LIBFT_
#define LIBFT_

#include <ctype.h>
#include <stdlib.h>

#include "./ft_isalpha.c"
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"
#include "./ft_strlen.c"
#include "./ft_memset.c"
#include "./ft_memcpy.c"
#include "./ft_memmove.c"
#include "./ft_bzero.c"
#include "./ft_toupper.c"
#include "./ft_tolower.c"
#include "./ft_strlcpy.c"
#include "./ft_strlcat.c"
#include "./ft_strchr.c"
#include "./ft_strrchr.c"
#include "./ft_strncmp.c"
#include "./ft_strnstr.c"
#include "./ft_atoi.c"
#include "./ft_calloc.c"
#include "./ft_strdup.c"
#include "./ft_substr.c"
#include "./ft_strjoin.c"
#include "./ft_strtrim.c"

int		ft_isalpha(int c);
int		ft_isdigit(int d);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char 	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
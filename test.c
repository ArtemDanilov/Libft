#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
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

int		ft_isalpha(int c);
int		ft_isdigit(int d);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char*	cond_st(int n)
{
	return n ? "true" : "false";
}

void test_func(char* text, char* func_name, int (*func)(int), char array[])
{
	int	i;

	i = 0;
	printf("%s() \n-----------------------\n", func_name);
	while (array[i] != 0)
	{
		printf("'%c' %s => %s\n", array[i], text, cond_st(func(array[i])));
		i++;
	}
	printf("-----------------------\n");
}

/*
 * ------------------------------
 *        Tested functions       *
 * ------------------------------
 */

char chars[] = {31, '9', '0', 0x4A, 'A', 'z', '*', ' ', '}', 0x80};

void	test_isalpha(void)
{
	test_func("is alpha", "ft_isalpha", isalpha, chars);
}

void	test_isdigit(void)
{
	test_func("is digit", "ft_isdigit", ft_isdigit, chars);
}

void	test_isalnum(void)
{
	test_func("is alpha or digit", "ft_isalnum", ft_isalnum, chars);
}

void	test_isascii(void)
{
	test_func("is ascii", "ft_isascii", ft_isascii, chars);
}

void	test_isprint(void)
{
	test_func("is print", "ft_isprint", ft_isprint, chars);
}

char *string[] = {"Hello", "42 Warsaw", "student"};

void	test_strlen(void)
{
	int	i;

	i = 0;
	printf("ft_strlen() \n-----------------------\n");
	while (string[i] != 0)
	{
		printf("Length of '%s' is %ld\n", string[i], ft_strlen(string[i]));
		i++;
	}
	printf("-----------------------\n");
}

void	test_memset(void)
{
	char	str_memset[] = "Hello you!";

	printf("ft_memset() \n-----------------------\n");
	ft_memset(str_memset, '#', 3);
	printf("%s - original\n", str_memset);
	ft_memset(str_memset, '#', 3);
	printf("%s - custom\n", str_memset);
	printf("-----------------------\n");
}


void	test_memcpy(void)
{
	char	d_memcpy[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	char	d_memcpy2[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	char	s_memcpy[2] = {'1', '2'};
	char	s_memcpy2[2] = {'1', '2'};

	printf("ft_memcpy() \n-----------------------\n");
	memcpy(d_memcpy + 2, s_memcpy, 2);
	printf("%s - original\n", d_memcpy);
	ft_memcpy(d_memcpy2 + 2, s_memcpy2, 2);
	printf("%s - custom\n", d_memcpy2);
	printf("-----------------------\n");
}

void	test_memmove(void)
{
	char	d_memmove[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	char	d_memmove2[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	char	s_memmove[2] = {'1', '2'};
	char	s_memmove2[2] = {'1', '2'};

	printf("ft_memmove() \n-----------------------\n");
	memmove(d_memmove + 2, s_memmove, 2);
	printf("%s - original\n", d_memmove);
	ft_memmove(d_memmove2 + 2, s_memmove2, 2);
	printf("%s - custom\n", d_memmove2);
	printf("-----------------------\n");
}

void	test_bzero()
{
	char	str_bzero[7] = "ABCDEFG";
	char	str_bzero2[7] = "ABCDEFG";
	
	bzero(str_bzero, 2);
	ft_bzero(str_bzero2, 2);

	printf("ft_bzero() \n-----------------------\n");
	for(int i = 0; i < 7; i++)
	{
		printf("%02X ", str_bzero[i]);
	}
	printf(" - Original\n");
	for(int i = 0; i < 7; i++)
	{
		printf("%02X ", str_bzero2[i]);
	}
	printf(" - Custom");
	printf("\n-----------------------\n");
}


void	test_toupper(void)
{
	char test_uppercase[] = {'a', 'z', 'b', 'm', '4', 31, '*'};
	int	i;

	i = 0;
	printf("ft_toupper() \n-----------------------\n");
	while (test_uppercase[i] != 0)
	{
		printf("Uppercase of '%c' is %c\n", test_uppercase[i], ft_toupper(test_uppercase[i]));
		i++;
	}
	printf("-----------------------\n");
}

void	test_tolower(void)
{
	char test_lowercase[] = {'A', 'Z', 'B', 'M', '4', 31, '*'};
	int	i;

	i = 0;
	printf("ft_tolower() \n-----------------------\n");
	while (test_lowercase[i] != 0)
	{
		printf("Lowercase of '%c' is %c\n", test_lowercase[i], ft_tolower(test_lowercase[i]));
		i++;
	}
	printf("-----------------------\n");
}

void	test_strlcpy(void)
{
	char	dest[20] = "Some";
	char	src[] = "Destination";

	char	dest2[20] = "Some";
	char	src2[] = "Destination";

	printf("ft_strlcpy() \n-----------------------\n");
	printf("---Original\n");
	printf("Length: %ld\n", strlcpy(dest, src, 20));
	printf("Copied 3 symbols: %s\n", dest);
	printf("---Custom\n");
	printf("Length: %ld\n", ft_strlcpy(dest2, src2, 20));
	printf("Copied 3 symbols: %s", dest2);
	printf("\n-----------------------\n");
}

void	test_strlcat(void)
{
	char	*dest_strlcat = calloc(20, sizeof(char));
	size_t	length;

	strcpy(dest_strlcat, "First, ");
	printf("ft_strlcat() \n-----------------------\n");
	printf("before: %s\n", dest_strlcat);

	length = ft_strlcat(dest_strlcat, "Second", 20);

	printf("after: %s\n", dest_strlcat);
	printf("length: %ld", length);
	printf("\n-----------------------\n");
}

void	test_strchr(void)
{
	const char	*src;
	char		c;

	src = "Destination";
	c = 't';
	printf("ft_strchr() \n-----------------------\n");
	printf("---Original\n");
	printf("Letter '%c' in '%s' is placed in: %ld position\n",
		c,
		src,
		strchr(src, c) - src + 1);
	printf("Character '\\0' in '%s' is placed in: %ld position\n",
		src,
		strchr(src, '\0') - src + 1);
	printf("---Custom\n");
	printf("Letter '%c' in '%s' is placed in: %ld position\n",
		c,
		src,
		ft_strchr(src, c) - src + 1);
	printf("Character '\\0' in '%s' is placed in: %ld position\n",
		src,
		ft_strchr(src, '\0') - src + 1);
	printf("-----------------------\n");
}

void	test_strrchr(void)
{
	const char	*src;
	char		c;

	src = "Destination";
	c = 't';
	printf("ft_strrchr() \n-----------------------\n");
	printf("---Original\n");
	printf("Letter '%c' in '%s' is placed in: %ld position\n",
		c,
		src,
		strrchr(src, c) - src + 1);
	printf("Character '\\0' in '%s' is placed in: %ld position\n",
		src,
		strrchr(src, '\0') - src + 1);
	printf("---Custom\n");
	printf("Letter '%c' in '%s' is placed in: %ld position\n",
		c,
		src,
		ft_strrchr(src, c) - src + 1);
	printf("Character '\\0' in '%s' is placed in: %ld position\n",
		src,
		ft_strrchr(src, '\0') - src + 1);
	printf("-----------------------\n");
}

void test_strncmp(void)
{
	char	*s1 = "Yepep";
	char	*s2 = "Yepyep";
	size_t	n = 3;
	size_t	n2 = 5;

	printf("ft_strncmp() \n-----------------------\n");
	printf("---Original\n");
	printf("Comparison of '%s' with '%s' to %ld character: %d\n", s1, s2, n, strncmp(s1, s2, n));
	printf("Comparison of '%s' with '%s' to %ld character: %d\n", s1, s2, n2, strncmp(s1, s2, n2));
	printf("---Custom\n");
	printf("Comparison of '%s' with '%s' to %ld character: %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
	printf("Comparison of '%s' with '%s' to %ld character: %d\n", s1, s2, n2, ft_strncmp(s1, s2, n2));
	printf("\n-----------------------\n");
}

int	main(void)
{
	printf("-----------------------\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_memcpy();
	test_memmove();
	test_bzero();
	test_toupper();
	test_tolower();
	test_strlcpy();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strncmp();
}

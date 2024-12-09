#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <ctype.h>
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"
#include "./ft_strlen.c"
#include "./ft_bzero.c"
#include "./ft_toupper.c"
#include "./ft_tolower.c"
#include "./ft_strlcpy.c"
#include "./ft_strlcat.c"

int		ft_isdigit(int d);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *s);
void	ft_bzero(void *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

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

void	test_isdigit(void) {
	test_func("is digit", "ft_isdigit", ft_isdigit, chars);
}

void	test_isalnum(void) {
	test_func("is alpha or digit", "ft_isalnum", ft_isalnum, chars);
}

void	test_isascii(void) {
	test_func("is ascii", "ft_isascii", ft_isascii, chars);
}

void	test_isprint(void) {
	test_func("is print", "ft_isprint", ft_isprint, chars);
}

char *string[] = {"Hello", "42 Warsaw", "student"};

void	test_strlen(void) {
	int	i;

	i = 0;
	printf("ft_strlen() \n-----------------------\n");
	while (string[i] != 0)
	{
		printf("Length of '%s' is %d\n", string[i], ft_strlen(string[i]));
		i++;
	}
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


void	test_toupper(void) {
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

void	test_tolower(void) {
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

void	test_strlcpy(void) {
	char	dest[4] = "Some";
	char	src[] = "Destination";

	char	dest2[4] = "Some";
	char	src2[] = "Destination";

	printf("ft_strlcpy() \n-----------------------\n");
	printf("---Original\n");
	printf("Length: %ld\n", strlcpy(dest, src, 3));
	printf("Copied 3 symbols: %s\n", dest);
	printf("---Custom\n");
	printf("Length: %ld\n", ft_strlcpy(dest2, src2, 3));
	printf("Copied 3 symbols: %s", dest2);
	printf("\n-----------------------\n");
}

void	test_strlcat(void) {
	char	dest[20] = "Some";
	char	src[] = "Destination";

	// char	dest2[5] = {0};
	// char	src2[] = "Destination";
	printf("ft_strlcat() \n-----------------------\n");
	printf("---Original\n");
	printf("Length: %ld\n", strlcat(dest, src, 11));
	printf("Copied 3 symbols: %s\n", dest);
	// printf("---Custom\n");
	// printf("Length: %ld\n", ft_strlcat(dest2, src2, 3));
	// printf("Copied 3 symbols: %s", dest2);
	printf("\n-----------------------\n");
}

int	main(void)
{
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_bzero();
	test_toupper();
	test_tolower();
	test_strlcpy();
	test_strlcat();
}
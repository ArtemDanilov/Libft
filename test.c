#include <stdio.h>
#include <ctype.h>
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"
#include "./ft_strlen.c"

int	ft_isdigit(int d);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *s);

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

int	main(void)
{
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
}
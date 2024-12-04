#include <stdio.h>
#include <ctype.h>
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"

int	ft_isdigit(int d);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

char*	cond_st(int n)
{
	return n ? "true" : "false";
}

void test_func(char* text, char* func_name, int (*func)(int))
{
	char	chars[] = {31, '9', '0', 0x4A, 'A', 'z', '*', ' ', '}', 0x80};
	size_t	i;

	i = 0;
	printf("%s() \n-----------------------\n", func_name);
	while (i < sizeof(chars))
	{
		printf("'%c' %s => %s\n", chars[i], text, cond_st(func(chars[i])));
		i++;
	}
	printf("-----------------------\n");
}

/*
 * ------------------------------
 *        Tested functions       *
 * ------------------------------
 */
void	test_isdigit(void) {
	test_func("is digit", "ft_isdigit", ft_isdigit);
}

void	test_isalnum(void) {
	test_func("is alpha or digit", "ft_isalnum", ft_isalnum);
}

void	test_isascii(void) {
	test_func("is ascii", "ft_isascii", ft_isascii);
}

void	test_isprint(void) {
	test_func("is print", "ft_isprint", ft_isprint);
}

int	main(void)
{
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
}
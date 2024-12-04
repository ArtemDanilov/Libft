#include <stdio.h>
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"

int	ft_isdigit(int d);
int	ft_isdigit(int c);

char*	cond_st(int n)
{
	return n ? "true" : "false";
}

void test_func(char* text, char* func_name, int (*func)(int))
{
	char	chars[] = {'9', '0', '3', 'A', 'z', '*', ' ', '-'};
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

int	main(void)
{
	test_isdigit();
	test_isalnum();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artem <artem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:44:42 by artem             #+#    #+#             */
/*   Updated: 2024/12/04 12:18:03 by artem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_isdigit.c"

int	ft_isdigit(int d);

char*	cond_st(int n)
{
	return n ? "true" : "false";
}

void	test_isdigit(void) {
	printf("ft_isdigit() \n ------------------ \n");
	printf("'0' is digit: %s\n", cond_st(ft_isdigit('0')));
	printf("'9' is digit: %s\n", cond_st(ft_isdigit('0')));
	printf("'5' is digit: %s\n", cond_st(ft_isdigit('5')));
	printf("'$' is digit: %s\n", cond_st(ft_isdigit('$')));
	printf("'A' is digit: %s\n", cond_st(ft_isdigit('A')));
	printf("'z' is digit: %s\n", cond_st(ft_isdigit('z')));
	printf("'_' is digit: %s\n", cond_st(ft_isdigit(' ')));
	printf("------------------ \n");
}

int	main(void)
{
	test_isdigit();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artem <artem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:45:59 by artem             #+#    #+#             */
/*   Updated: 2024/12/16 12:16:21 by artem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*fs;
	size_t	i;

	fs = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (fs[i] == (unsigned char)c)
			return ((void *)(fs + i));
		i++;
	}
	return (0);
}

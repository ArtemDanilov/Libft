/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artem <artem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:49:14 by artem             #+#    #+#             */
/*   Updated: 2024/12/16 13:53:27 by artem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*fs1;
	const unsigned char	*fs2;
	size_t		i;

	fs1 = (const unsigned char *)s1;
	fs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (fs1[i] != fs2[i])
			return ((int)(fs1[i] - fs2[i]));
		i++;
	}
	return (0);
}

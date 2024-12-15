/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanilov <adanilov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:00:04 by adanilov          #+#    #+#             */
/*   Updated: 2024/12/06 15:27:50 by adanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*f_src;
	unsigned char		*f_dest;
	size_t				i;

	f_src = src;
	f_dest = dest;
	if (f_dest < f_src)
	{
		while (n > 0)
		{
			f_dest[n] = f_src[n];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			f_dest[i] = f_src[i];
			i++;
		}
	}
	return (f_dest);
}

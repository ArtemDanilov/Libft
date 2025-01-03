/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemdanilov <artemdanilov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:42:18 by artemdanilo       #+#    #+#             */
/*   Updated: 2024/12/27 23:35:12 by artemdanilo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (len == 0)
		return (NULL);
	new_s = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (i < start)
		i++;
	while (s[i] != '\0' && j < len)
	{
		new_s[j] = s[i + j];
		j++;
	}
	return (new_s);
}

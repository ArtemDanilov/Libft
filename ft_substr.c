/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artem <artem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:50:15 by artem             #+#    #+#             */
/*   Updated: 2025/01/05 18:50:15 by artem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

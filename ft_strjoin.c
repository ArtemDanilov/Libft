/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanilov <adanilov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:22:53 by adanilov          #+#    #+#             */
/*   Updated: 2025/01/03 12:41:24 by adanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2++;
		i++;
	}
	return (str);
}

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*fs;
	char	*temp;

	fs = malloc(ft_strlen(s) + 1);
	if (!fs)
		return (NULL);
	temp = fs;
	while (*s)
	{
		*temp = *s;
		temp++;
		s++;
	}
	*temp = '\0';
	return ((char *)fs);
}

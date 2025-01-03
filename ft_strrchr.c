#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*fs;

	fs = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			fs = s;
		s++;
	}
	return ((char *)fs);
}

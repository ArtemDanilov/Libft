#include "libft.h"

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

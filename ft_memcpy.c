#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char		*f_src;
	unsigned char			*f_dest;
	size_t					i;

	f_src = src;
	f_dest = dest;
	i = 0;
	while (i < n)
	{
		f_dest[i] = f_src[i];
		i++;
	}
	return (dest);
}

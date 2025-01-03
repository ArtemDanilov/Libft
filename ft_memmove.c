#include "libft.h"

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

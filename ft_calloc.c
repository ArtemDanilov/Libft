#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*mem;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	i = 0;
	while (i < nmemb * size)
	{
		((char *)mem)[i] = 0;
		i++;
	}
	return ((void *)mem);
}

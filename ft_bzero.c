#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ft_s;

	i = 0;
	ft_s = s;
	while (i < n)
	{
		ft_s[i] = '\0';
		i++;
	}
}

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	size_t			j;
	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}


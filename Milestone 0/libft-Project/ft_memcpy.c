#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)dest_str;
	src = (unsigned char *)src_str;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest_str);
}

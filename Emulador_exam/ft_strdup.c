
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		srclen;
	char	*dest;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dest = malloc(sizeof(char) * (srclen + 1));
	if (*dest == 0)
		return (0);
	srclen = 0;
	while (src[srclen])
	{
		dest[srclen] = src[srclen];
		srclen++;
	}
	dest[srclen] = 0;
	return (dest);
}

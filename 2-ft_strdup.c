#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char 	*dest;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_strdup(char *str)
{
	char *s;
	int i;

	s = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	if (!s)
		return NULL;
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return s;
}

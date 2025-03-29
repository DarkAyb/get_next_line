#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*single;
	size_t	i;
	size_t	j;
	size_t	l;

	single = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if ((!s1 && !s2) || !single)
		return (NULL);
	i = 0;
	j = 0;
	l = ft_strlen(s1);
	while (i < l)
	{
		single[i] = s1[i];
		i++;
	}
	l = ft_strlen(s2);
	while (j < l)
	{
		single[i + j] = s2[j];
		j++;
	}
	single[i + j] = '\0';
	free(s1);
	return (single);
}
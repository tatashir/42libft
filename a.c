#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*n_s;
	size_t	s_size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set,*s1) != NULL)
		s1++;
	s_size = ft_strlen(s1);
	while (s_size > 0 && ft_strchr(set, s1[s_size - 1]) != NULL)
		s_size--;
	n_s = ft_substr((char *)s1, 0, s_size);
	return (n_s);
}

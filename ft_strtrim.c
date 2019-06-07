/** vim 42 header **/

#include "libft.h"

void	ft_start_check(char const *s, size_t *i)
{
	while ((s[*i] == ' ') || (s[*i] == '\n') || (s[*i] == '\t'))
	{
		(*i)++;
	}
}

void	ft_end_check(char const *s, size_t *j)
{
	*j = ft_strlen(s) - 1;
	while ((s[*j] == ' ') || (s[*j] == '\n') || (s[*j] == '\t'))
	{
		(*j)--;
	}
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	ft_start_check(s, &i);
	if (s[i] == '\0')
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[i] = s[i];
		return (str);
	}
	ft_end_check(s, &j);
	str = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (str == NULL)
		return (NULL);
	while (i <= j)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k++] = '\0';
	return (str);
}

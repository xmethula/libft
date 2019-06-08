/** vim 42 header **/

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}

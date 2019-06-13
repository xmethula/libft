/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:06:22 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/13 13:50:42 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_start_check(char const *s, size_t *i)
{
	while ((s[*i] == ' ') || (s[*i] == '\n') || (s[*i] == '\t'))
	{
		(*i)++;
	}
}

static	void	ft_end_check(char const *s, size_t *j)
{
	*j = ft_strlen(s) - 1;
	while ((s[*j] == ' ') || (s[*j] == '\n') || (s[*j] == '\t'))
	{
		(*j)--;
	}
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	ft_start_check(s, &i);
	if (s[i] == '\0')
		return ("");
	ft_end_check(s, &j);
	str = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (str == NULL)
		return (NULL);
	while ((i + k) <= j)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

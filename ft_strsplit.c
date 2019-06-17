/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:56:41 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/17 14:54:30 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_cntwrd(char const *s, char c)
{
	int		i;
	int		ctr;

	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ctr++;
		i++;
	}
	return (ctr);
}

static	char	*ft_strndup(const char *s, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	k = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		if (i > j)
		{
			arr[k] = ft_strndup(&s[j], i - j);
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:56:41 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/13 15:43:34 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_cntwrd(char const *s, char c)
{
	int i;
	int cntr;

	i = 0;
	cntr = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while ((s[i] != '\0') && (s[i] != c))
		{
			if ((s[i] != '\0') && (s[i] != c))
				i++;
			cntr++;
		}
	}
	return (cntr);
}

static	char	*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (tab == NULL)
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
			tab[k] = ft_strndup(&s[j], i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

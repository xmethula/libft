/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:56:41 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/18 11:21:03 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	k = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
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

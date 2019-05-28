/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:46:03 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/28 14:48:22 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*needle != '\0')
	{
		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

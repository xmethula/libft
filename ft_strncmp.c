/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 07:41:27 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/30 15:59:52 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	if (i == n)
	{
		i -= 1;
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	else
	{
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
}

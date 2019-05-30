/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:05 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/30 10:55:21 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while ((((char *)src)[i] != '\0') && (i < n))
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			((char *)dst)[i] = ((unsigned char *)src)[i];
			return (dst);
		}
		((char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((char *)dst)[i] = '\0';
	return (dst);
}

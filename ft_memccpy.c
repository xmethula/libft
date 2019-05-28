/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:05 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/27 14:32:26 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while ((((char *)src)[i] != '\0') && (i < n))
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			((char *)dest)[i] = ((unsigned char *)src)[i];
			return (dest);
		}
		((char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}

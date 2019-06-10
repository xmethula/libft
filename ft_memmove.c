/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:49:18 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/10 13:04:51 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	i = 0;
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	if ((dst == src) || (len == 0))
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			dptr[len] = sptr[len];
		}
	}
	else
	{
		while (i < len)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	return (dst);
}

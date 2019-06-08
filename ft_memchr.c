/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:55:50 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/31 15:15:25 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*sptr;
	unsigned char	*cptr;

	i = 0;
	sptr = (unsigned char *)s;
	cptr = (unsigned char)c;
	while ((sptr[i] != '\0') && (i < n))
	{
		if (sptr[i] == cptr)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}

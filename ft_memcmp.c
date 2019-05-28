/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:35:35 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/28 08:50:50 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((((char *)s1)[i] == ((char *)s2)[i]) && (i < n))
	{
		i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

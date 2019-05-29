/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:18:53 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/29 12:15:48 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if ((ft_strlen(b) + 1) < len)
	{
		return (NULL);
	}
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

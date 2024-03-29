/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:19:28 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/25 13:07:14 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int res;

	res = 0;
	if ((c >= 'A') && (c <= 'Z'))
		res = c + 32;
	else
		res = c;
	return (res);
}

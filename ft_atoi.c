/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:27:56 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/10 09:32:08 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	void	ft_check(const char *str, int *i)
{
	while ((str[*i] == ' ') ||
			(str[*i] == '\n') ||
			(str[*i] == '\t') ||
			(str[*i] == '\f') ||
			(str[*i] == '\v') ||
			(str[*i] == '\r'))
	{
		(*i)++;
	}
}

int				ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	ft_check(str, &i);
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

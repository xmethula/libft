/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:27:56 by xmethula          #+#    #+#             */
/*   Updated: 2019/05/20 09:11:03 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	void	check(const char *str, int *i)
{
	while ((str[*i] == ' ') || (str[*i] == '\n') || (str[*i] == '\t') || (str[*i] == '\f') || (str[*i] == '\v') || (str[*i] == '-') || (str[*i] == '+'))
	{
		(*i)++;
	}
}

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	if (str[i] == '-')
	{
		sign = 1;
	}
	check(str,&i);
	while (str[i] != '\0')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	if (sign == 1)
	{
		return (-res);
	}
	else
	{
		return (res);
	}
}

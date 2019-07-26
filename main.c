/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 07:51:49 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/26 15:41:25 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	int					data;
	struct s_list		*next;
}						t_list;

void	print(t_list *node)
{
	while (node)
	{
		ft_putnbr_endl(node->data);
		node = node->next;
	}
	ft_putchar('\n');
}

t_list	*add_end(t_list *node, int val)
{
	t_list		*i;
	t_list		*new;

	i = node;
	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	new->next = NULL;
	while (i->next)
	{
		i = i->next;
	}
	i->next = new;
	return (node);
}

int		list_len(t_list *node)
{
	int		len;

	len = 0;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}

int		main(void)
{
	t_list		*head;
	t_list		*body;

	head = (t_list *)malloc(sizeof(t_list));
	body = (t_list *)malloc(sizeof(t_list));

	head->data = 10;
	head->next = body;

	body->data = 20;
	body->next = NULL;

	print(head);	
	ft_putnbr_endl(list_len(head));

	add_end(head, 30);
	print(head);	
	ft_putnbr_endl(list_len(head));

	add_end(head, 40);
	print(head);
	ft_putnbr_endl(list_len(head));

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:08:29 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/31 15:38:16 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

void	print(t_list *node)
{
	while (node != NULL)
	{
		ft_putnbr_endl(node->data);
		node = node->next;
	}
}

int		lst_len(t_list *node)
{
	int		len;

	len = 0;
	while (node != NULL)
	{
		len++;
		node = node->next;
	}
	return (len);
}

void	add_start(t_list **node, int val)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	if (*node == NULL)
	{	
		new->next = NULL;
		*node = new;
	}
	else
	{
		new->next = *node;
		*node = new;
	}
}

void	add_end(t_list **node, int val)
{
	t_list		*new;
	t_list		*i;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	new->next = NULL;
	if (*node == NULL)
		*node = new;
	else
	{
		i = *node;
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}
}

void	add_pos(t_list **node, int val, int pos)
{
	t_list		*new;
	t_list		*i;
	int			len;
	int			j;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	len = lst_len(*node);
	if (pos > len)
		ft_putendl("error");
	else if (pos == 1)
	{
		new->next = (*node)->next;
		(*node)->next = new;
	}
	else
	{
		j = 1;
		i = *node;
		while (j < pos)
		{
			i = i->next;
			j++;
		}
		new->next = i->next;
		i->next = new;
	}

}

void	del_start(t_list **node)
{
	t_list		*tmp;

	tmp = *node;
	*node = tmp->next;
	tmp->next = NULL;
	free(tmp);
}

void	del_end(t_list **node)
{
	t_list		*tmp;
	t_list		*i;
	int			len;
	int			j;

	len = lst_len(*node);
	j = 1;
	i = *node;
	while (j < (len - 1))
	{
		i = i->next;
		j++;
	}
	tmp = i->next;
	i->next = NULL;
	free(tmp);
}

void	del_pos(t_list **node, int val, int pos)
{
	t_list		*tmp;
	t_list		*i;
	int			len;
	int			j;

	len = lst_len(*node);
	if (pos > len)
		ft_putendl("error");
	else if (pos == 1)
		del_start(node);
	else
	{
		j = 1;
		i = *node;
		while (j < (pos - 1))
		{
			i = i->next;
			j++;
		}
		tmp = i->next;

	}
}

int		main(void)
{
	t_list		*root;

	root = NULL;
	add_start(&root, 5);
	print(root);
	ft_putchar('\n');

	add_end(&root, 10);
	print(root);
	ft_putchar('\n');

	add_end(&root, 20);
	print(root);
	ft_putchar('\n');

	add_pos(&root, 15, 2);
	print(root);
	ft_putchar('\n');

	del_start(&root);
	print(root);
	ft_putchar('\n');

	del_end(&root);
	print(root);
	ft_putchar('\n');
	return (0);
}

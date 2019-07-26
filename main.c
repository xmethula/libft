/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 07:51:49 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/26 18:19:19 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

void		add_end(t_list **node, int val)
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

/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(t_list **head_ref, int new_data)
{
	/* 1. allocate node */
	t_list		*new_node = (t_list *) malloc(sizeof(t_list));

	t_list		*last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. This new node is going to be the last node, so make next
		of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head_ref == NULL)
		*head_ref = new_node;
	else
	{
		/* 5. Else traverse till the last node */
		while (last->next != NULL)
			last = last->next;

		/* 6. Change the next of last node */
		last->next = new_node;
	}
}

void		print(t_list *node)
{
	while (node != NULL)
	{
		ft_putnbr_endl(node->data);
		node = node->next;
	}
}

int		main(void)
{
	t_list		*root;
	
	root = NULL;

	add_end(&root, 5);
	print(root);

	return (0);
}

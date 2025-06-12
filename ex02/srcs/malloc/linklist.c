/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetsuks <npetsuks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:43:39 by waragwon          #+#    #+#             */
/*   Updated: 2025/06/08 14:47:21 by npetsuks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_malloc.h"

struct s_node	*create_node(void *new_data)
{
	struct s_node	*new_node;

	new_node = malloc(sizeof(struct s_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->value = new_data;
	new_node->next = NULL;
	return (new_node);
}

struct s_node	*append(struct s_node *head, void *new_data)
{
	struct s_node	*new_node;
	struct s_node	*last;

	new_node = create_node(new_data);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
		return (new_node);
	last = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (head);
}

// void print_list(t_node *node)
// {
//     while (node != NULL) {
//         printf(" %p", node->value);
//         node = node->next;
//     }
// }

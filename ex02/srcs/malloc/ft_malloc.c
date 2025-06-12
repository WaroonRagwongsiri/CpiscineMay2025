/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetsuks <npetsuks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:52:09 by waragwon          #+#    #+#             */
/*   Updated: 2025/06/08 13:58:28 by npetsuks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_malloc.h"

static t_node	*g_head = NULL;

void	*ft_malloc(int size)
{
	void	*new;

	new = malloc(size);
	if (new == NULL)
	{
		return (NULL);
	}
	if (append(g_head, new) == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

void	traverse_free_list(void)
{
	t_node	*current;

	current = g_head;
	while (current != NULL)
	{
		if (current->value != NULL)
		{
			free(current->value);
		}
		current = current->next;
	}
}

void	free_list(void)
{
	t_node	*tmp;

	while (g_head != NULL)
	{
		tmp = g_head;
		g_head = g_head->next;
		free(tmp);
	}
}

int	init_head(void)
{
	g_head = append(g_head, NULL);
	if (g_head == NULL)
	{
		free_all();
		return (0);
	}
	return (1);
}

void	free_all(void)
{
	traverse_free_list();
	free_list();
	free(g_head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 08:34:29 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 08:34:29 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <stdlib.h>

typedef struct s_node
{
	void			*value;
	struct s_node	*next;
}	t_node;

t_node	*append(struct s_node *head, void *new_data);

int		init_head(void);

void	*ft_malloc(int size);
void	free_all(void);

#endif
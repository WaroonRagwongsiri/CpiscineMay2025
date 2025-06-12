/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_std2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-11 21:37:36 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-11 21:37:36 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	check_count_std(int file_count, int *first)
{
	if (file_count > 1 && *first == 1)
	{
		ft_putstr("==> standard input <==");
		ft_putstr("\n");
	}
	else if (file_count > 1)
	{
		ft_putstr("\n");
		ft_putstr("==> standard input <==");
		ft_putstr("\n");
	}
}

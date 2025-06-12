/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_all2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-11 07:06:10 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-11 07:06:10 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	err_msg_is_dir(char *filename, int errnum, int file_count, int *first);
void	err_msg_unread(char *filename, int errnum);

void	print_erro(char *filename, int errnum, int file_count, int *first)
{
	if (errnum == 21)
	{
		err_msg_is_dir(filename, errnum, file_count, first);
	}
	else
	{
		err_msg_unread(filename, errnum);
	}
}

void	err_msg_is_dir(char *filename, int errnum, int file_count, int *first)
{
	if (file_count > 1 && *first == 1)
	{
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		erro_msg(filename, errnum);
		ft_putstr("\n");
		*first = 0;
	}
	else if (file_count > 1)
	{
		ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		erro_msg(filename, errnum);
		ft_putstr("\n");
	}
	else
	{
		erro_msg(filename, errnum);
	}
}

void	err_msg_unread(char *filename, int errnum)
{
	erro_msg(filename, errnum);
	ft_putstr("\n");
}

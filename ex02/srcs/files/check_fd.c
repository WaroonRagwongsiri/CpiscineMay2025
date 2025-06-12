/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 13:56:06 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 13:56:06 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	check_fd(char *filename)
{
	int	fd;
	int	numerr;

	numerr = 0;
	fd = open(filename, O_RDWR);
	if (errno == 2 || fd < 0)
	{
		numerr = errno;
		errno = 0;
	}
	else if (errno == 21 || fd < 0)
	{
		numerr = errno;
		errno = 0;
	}
	if (fd >= 0)
	{
		close(fd);
	}
	return (numerr);
}

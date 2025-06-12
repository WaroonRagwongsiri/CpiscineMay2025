/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-09 10:30:20 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-09 10:30:20 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_fd(char *filename)
{
	int	fd;

	fd = open(filename, O_RDWR);
	if (errno == 2 || errno == 21 || fd < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(filename);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
		if (fd > 0)
		{
			close(fd);
		}
		return (1);
	}
	close(fd);
	return (0);
}

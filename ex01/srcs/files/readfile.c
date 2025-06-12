/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-05 14:39:45 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-05 14:39:45 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	readfile(char *filename)
{
	char	buffer[1024];
	int		byte_reads;
	int		fd;

	byte_reads = 1;
	fd = open(filename, O_RDONLY);
	while (byte_reads > 0)
	{
		byte_reads = read(fd, buffer, sizeof(buffer));
		buffer[byte_reads] = '\0';
		ft_putstr(buffer);
	}
	close(fd);
}

// ft_putnbr(byte_reads);
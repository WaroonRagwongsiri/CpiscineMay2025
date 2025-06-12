/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_buffer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 16:58:35 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 16:58:35 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

ssize_t	count_buffer(char *filename)
{
	ssize_t	sum;
	char	buffer[1024];
	int		bytes_read;
	int		fd;

	sum = 0;
	bytes_read = 1;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		sum += bytes_read;
	}
	close(fd);
	return (sum);
}

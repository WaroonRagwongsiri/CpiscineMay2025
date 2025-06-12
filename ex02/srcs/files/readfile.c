/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 15:43:52 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 15:43:52 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_malloc.h"

char	*readfile(char *filename)
{
	char	*buffer;
	ssize_t	buffer_size;
	int		byte_reads;
	int		fd;

	buffer_size = count_buffer(filename);
	byte_reads = 1;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	buffer = ft_malloc(sizeof(char) * (buffer_size + 1));
	if (!buffer)
		return (NULL);
	while (byte_reads > 0)
	{
		byte_reads = read(fd, buffer, buffer_size);
	}
	close(fd);
	buffer[buffer_size] = '\0';
	return (buffer);
}

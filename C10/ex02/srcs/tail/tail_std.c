/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_std.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 16:33:16 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 16:33:16 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_malloc.h"

char	*append_size(char *old, char *add, ssize_t new_size);
void	check_count_std(int file_count, int *first);

void	tail_std(int file_count, int *first)
{
	char	*buffer;
	char	*tmp_buffer;
	ssize_t	size;
	int		byte_reads;

	check_count_std(file_count, first);
	size = 0;
	byte_reads = 1;
	buffer = ft_malloc(1);
	buffer[0] = '\0';
	tmp_buffer = ft_malloc(1);
	tmp_buffer[0] = '\0';
	while (byte_reads > 0)
	{
		byte_reads = read(0, buffer, 2);
		buffer[byte_reads] = '\0';
		size = ft_strlen(tmp_buffer) + 2;
		tmp_buffer = append_size(tmp_buffer, buffer, size);
		if (!buffer || !tmp_buffer)
			return ;
	}
	print_std(tmp_buffer, file_count, first);
}

void	tail_std_c_flag(int file_count, int *first, int c_flag)
{
	char	*buffer;
	char	*tmp_buffer;
	ssize_t	size;
	int		byte_reads;

	if (c_flag == -2)
		return ;
	check_count_std(file_count, first);
	size = 0;
	byte_reads = 1;
	buffer = ft_malloc(1);
	buffer[0] = '\0';
	tmp_buffer = ft_malloc(1);
	tmp_buffer[0] = '\0';
	while (byte_reads > 0)
	{
		byte_reads = read(0, buffer, 2);
		buffer[byte_reads] = '\0';
		size = ft_strlen(tmp_buffer) + 2;
		tmp_buffer = append_size(tmp_buffer, buffer, size);
		if (!buffer || !tmp_buffer)
			return ;
	}
	print_std_c_flag(tmp_buffer, file_count, first, c_flag);
}

char	*append_size(char *old, char *add, ssize_t new_size)
{
	char	*new;

	new = ft_malloc(new_size + 1);
	if (!new)
		return (NULL);
	new[0] = '\0';
	ft_strcat(new, old);
	ft_strcat(new, add);
	return (new);
}

void	print_std(char *file, int file_count, int *first)
{
	if (file_count > 1 && *first == 1)
	{
		tail_10_line(file);
		*first = 0;
	}
	else if (file_count > 1)
	{
		tail_10_line(file);
	}
	else
	{
		tail_10_line(file);
	}
}

void	print_std_c_flag(char *file, int file_count, int *first, int c_flag)
{
	if (file_count > 1 && *first == 1)
	{
		tail_byte(file, c_flag);
		*first = 0;
	}
	else if (file_count > 1)
	{
		tail_byte(file, c_flag);
	}
	else
	{
		tail_byte(file, c_flag);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-04 06:48:02 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-04 06:48:02 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*filename;

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2 && argv)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (check_fd(fd))
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	check_fd(int fd)
{
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	if (fd >= 3)
	{
		readfile(fd);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_all_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 09:38:42 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 09:38:42 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	printfile(char *filename, int file_count, int *first);
void	have_flag(char **argv, int c_flag, int file_count);
void	print_byte(char *filename, int c_flag, int file_count, int *first);

void	tail_all(char **argv, int c_flag)
{
	int	i;
	int	first;
	int	file_count;

	file_count = count_file(argv);
	i = 0;
	first = 1;
	if (c_flag == -2)
		return ;
	if (c_flag != -1)
		return (have_flag(argv, c_flag, file_count));
	while (argv[++i] != 0)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			tail_std(file_count, &first);
		else if (!check_fd(argv[i]))
			printfile(argv[i], file_count, &first);
		else if (check_fd(argv[i]))
			print_erro(argv[i], check_fd(argv[i]), file_count, &first);
	}
}

void	erro_msg(char *filename, int errnum)
{
	if (errnum == 2)
	{
		ft_putstr("tail: cannot open '");
		ft_putstr(filename);
		ft_putstr("' for reading: ");
		ft_putstr(strerror(errnum));
	}
	else if (errnum == 21)
	{
		ft_putstr("tail: error reading '");
		ft_putstr(filename);
		ft_putstr("' ");
		ft_putstr(strerror(errnum));
	}
}

void	have_flag(char **argv, int c_flag, int file_count)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (argv[++i] != 0)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			tail_std_c_flag(file_count, &first, c_flag);
		else if (ft_strcmp(argv[i], "-c") == 0)
			i++;
		else if (!check_fd(argv[i]))
			print_byte(argv[i], c_flag, file_count, &first);
		else if (check_fd(argv[i]))
			print_erro(argv[i], check_fd(argv[i]), file_count, &first);
	}
}

void	printfile(char *filename, int file_count, int *first)
{
	char	*file;

	file = readfile(filename);
	if (!file)
		return ;
	if (file_count > 1 && *first == 1)
	{
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		tail_10_line(file);
		*first = 0;
	}
	else if (file_count > 1)
	{
		ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		tail_10_line(file);
	}
	else
	{
		tail_10_line(file);
	}
}

void	print_byte(char *filename, int c_flag, int file_count, int *first)
{
	char	*file;

	file = readfile(filename);
	if (!file)
		return ;
	if (file_count > 1 && *first == 1)
	{
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		tail_byte(file, c_flag);
		*first = 0;
	}
	else if (file_count > 1)
	{
		ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
		tail_byte(file, c_flag);
	}
	else
	{
		tail_byte(file, c_flag);
	}
}

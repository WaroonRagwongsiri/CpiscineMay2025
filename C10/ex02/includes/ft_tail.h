/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-09 18:11:40 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-09 18:11:40 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>

// utils
ssize_t	ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);

// files
int		check_fd(char *filename);
int		count_file(char **argv);
ssize_t	count_buffer(char *filename);
char	*readfile(char *filename);

// tail
int		check_flag(char **argv, int argc);
void	invalid_byte(char *filename);
void	tail_std(int file_count, int *first);
void	tail_all(char **argv, int c_flag);
void	tail_10_line(char *file);
void	tail_byte(char *file, ssize_t byte);
void	erro_msg(char *filename, int errnum);
void	print_erro(char *filename, int errnum, int file_count, int *first);
void	tail_std_c_flag(int file_count, int *first, int c_flag);
void	print_std(char *file, int file_count, int *first);
void	print_std_c_flag(char *file, int file_count, int *first, int c_flag);
void	check_count_std(int file_count, int *first);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-08 10:04:20 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-08 10:04:20 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>

// files
int		count_buffer(char *filename);
int		check_fd(char *filename);
void	readfile(char *filename);

// util
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

// cat
void	cat_all_file(char **av);
void	cat_std(void);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-04 16:36:16 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-04 16:36:16 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	readfile(int fd);

int		check_fd(int fd);

#endif
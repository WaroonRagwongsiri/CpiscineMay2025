/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-05 08:56:09 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-05 08:56:09 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
int		check_operator_invalid(char *str);
int		ft_strlen(char *str);
void	plus(int a, int b);
void	minus(int a, int b);
void	divide(int a, int b);
void	multiply(int a, int b);
void	modulos(int a, int b);
int		choose_operator(char **argv);
void	ft_putnbr(int nb);

#endif
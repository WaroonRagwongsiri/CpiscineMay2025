/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_byte.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 15:53:08 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 15:53:08 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	invalid_byte(char *str)
{
	ft_putstr("tail: invalid number of bytes: ‘");
	ft_putstr(str);
	ft_putstr("’\n");
}

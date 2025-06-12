/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_byte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-11 06:38:57 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-11 06:38:57 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	tail_byte(char *file, ssize_t byte)
{
	ssize_t	len;

	len = ft_strlen(file);
	if (byte >= len)
	{
		byte = 0;
	}
	else
	{
		byte = len - byte;
	}
	ft_putstr(&file[byte]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_std.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-09 14:53:33 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-09 14:53:33 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	cat_std(void)
{
	char	buffer[2];
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(0, buffer, 1);
		buffer[bytes_read] = '\0';
		ft_putstr(buffer);
	}
}

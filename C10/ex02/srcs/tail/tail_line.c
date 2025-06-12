/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 18:32:26 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 18:32:26 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	line_count(char *file);

void	tail_10_line(char *file)
{
	int	i;
	int	line_cnt;

	i = 0;
	line_cnt = line_count(file);
	while (line_cnt > 10)
	{
		if (file[i] == '\n')
		{
			line_cnt--;
		}
		i++;
	}
	if (file[i] == '\n')
	{
		i++;
	}
	ft_putstr(&file[i]);
}

int	line_count(char *file)
{
	int	line;
	int	i;

	i = 0;
	line = 0;
	while (file[i] != '\0')
	{
		if (file[i] == '\n')
		{
			line++;
		}
		i++;
	}
	return (line);
}

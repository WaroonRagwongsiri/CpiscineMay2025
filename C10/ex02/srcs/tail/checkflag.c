/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 08:37:26 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 08:37:26 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	erro_option(void);

int	check_flag(char **argv, int argc)
{
	int	i;
	int	c_flag;

	i = 0;
	c_flag = -1;
	while (argv[++i] != 0)
	{
		if (ft_strcmp(argv[i], "-c") == 0)
		{
			if (i + 1 != argc)
			{
				if (!ft_str_is_numeric(argv[i + 1]))
				{
					invalid_byte(argv[i + 1]);
					return (-2);
				}
				else
					c_flag = ft_atoi(argv[i + 1]);
			}
			else
				erro_option();
		}
	}
	return (c_flag);
}

int	erro_option(void)
{
	ft_putstr("tail: option requires an argument -- 'c'\n");
	ft_putstr("Try 'tail --help' for more information.");
	return (-2);
}

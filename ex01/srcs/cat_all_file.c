/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_all_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-09 10:27:49 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-09 10:27:49 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	cat_all_file(char **av)
{
	int	i;

	i = 1;
	while (av[i] != 0)
	{
		if (ft_strcmp(av[i], "-") == 0)
		{
			cat_std();
		}
		else if (check_fd(av[i]))
		{
			i++;
			continue ;
		}
		else
		{
			readfile(av[i]);
		}
		i++;
	}
}

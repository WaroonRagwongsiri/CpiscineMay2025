/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 09:45:05 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 09:45:05 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

// else if (ft_strcmp(argv[i], "-c") != 0 && ft_strcmp(argv[i], "-") != 0)
// else if (ft_strcmp(argv[i], "-c") != 0)
int	count_file(char **argv)
{
	int	i;
	int	filecount;

	i = 1;
	filecount = 0;
	while (argv[i] != 0)
	{
		if (ft_strcmp(argv[i], "-c") == 0)
		{
			i += 2;
			continue ;
		}
		else if (ft_strcmp(argv[i], "-c") != 0)
		{
			filecount++;
		}
		i++;
	}
	return (filecount);
}

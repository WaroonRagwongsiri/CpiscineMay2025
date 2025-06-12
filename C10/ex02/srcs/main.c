/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-09 17:17:24 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-09 17:17:24 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "ft_malloc.h"

int	main(int argc, char **argv)
{
	int	first;

	first = 1;
	if (!init_head())
		return (1);
	if (argc == 1)
		tail_std(count_file(argv), &first);
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], "-c") == 0)
			return (check_flag(argv, argc));
		tail_all(argv, check_flag(argv, argc));
	}
	else if (argc == 3)
	{
		if (ft_strcmp(argv[1], "-c") == 0 && ft_str_is_numeric(argv[2]))
			tail_std_c_flag(count_file(argv), &first, check_flag(argv, argc));
		else
			tail_all(argv, check_flag(argv, argc));
	}
	else
		tail_all(argv, check_flag(argv, argc));
	free_all();
	return (0);
}

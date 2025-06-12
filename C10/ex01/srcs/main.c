/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-08 10:03:58 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-08 10:03:58 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// strerror(2) = No such file or directory
// strerror(21) = Is a directory
int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		cat_std();
	}
	else
	{
		cat_all_file(argv);
	}
	return (0);
}

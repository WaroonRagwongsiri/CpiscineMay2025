/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 18:43:39 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 18:43:39 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (1);
	}
	if (check_operator_invalid(argv[2]))
	{
		write(1, "0\n", 2);
		return (1);
	}
	choose_operator(argv);
	write(1, "\n", 1);
	return (0);
}

int	choose_operator(char **argv)
{
	if (argv[2][0] == '+')
	{
		plus(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	else if (argv[2][0] == '-')
	{
		minus(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	else if (argv[2][0] == '*')
	{
		multiply(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	else if (argv[2][0] == '/')
	{
		divide(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	else if (argv[2][0] == '%')
	{
		modulos(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	return (0);
}

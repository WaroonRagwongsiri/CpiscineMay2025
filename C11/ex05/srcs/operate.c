/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 18:45:31 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 18:45:31 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	plus(int a, int b)
{
	ft_putnbr(a + b);
}

void	minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	divide(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 23);
	}
	else
	{
		ft_putnbr(a / b);
	}
}

void	multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	modulos(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
	}
	else
	{
		ft_putnbr(a % b);
	}
}

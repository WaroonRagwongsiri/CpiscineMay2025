/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_iterative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 07:02:45 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 07:02:45 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_start;

	i = 1;
	nb_start = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= nb_start;
		i++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_iterative_power(-2,-3));
// 	printf("%d\n",ft_iterative_power(0,0));
// 	printf("%d\n",ft_iterative_power(0,1));
// 	printf("%d\n",ft_iterative_power(-2,3));
// 	printf("%d\n",ft_iterative_power(2,3));
// 	printf("%d\n",ft_iterative_power(-3,2));
// 	printf("%d\n",ft_iterative_power(4,1));
// 	return (0);
// }

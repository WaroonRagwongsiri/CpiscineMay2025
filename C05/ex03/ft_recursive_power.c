/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 07:08:42 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 07:08:42 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if (power == 2)
		return (nb * nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_recursive_power(-2,-3));
// 	printf("%d\n",ft_recursive_power(0,0));
// 	printf("%d\n",ft_recursive_power(0,1));
// 	printf("%d\n",ft_recursive_power(-2,3));
// 	printf("%d\n",ft_recursive_power(2,3));
// 	printf("%d\n",ft_recursive_power(-3,2));
// 	printf("%d\n",ft_recursive_power(4,1));
// 	return (0);
// }

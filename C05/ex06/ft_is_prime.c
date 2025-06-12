/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 07:57:54 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 07:57:54 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_is_prime(-4));
// 	printf("%d\n",ft_is_prime(-3));
// 	printf("%d\n",ft_is_prime(-2));
// 	printf("%d\n",ft_is_prime(-1));
// 	printf("%d\n",ft_is_prime(0));
// 	printf("%d\n",ft_is_prime(1));
// 	printf("%d\n",ft_is_prime(2));
// 	printf("%d\n",ft_is_prime(3));
// 	printf("%d\n",ft_is_prime(4));
// 	printf("%d\n",ft_is_prime(5));
// 	printf("%d\n",ft_is_prime(6));
// 	printf("%d\n",ft_is_prime(7));
// 	return (0);
// }

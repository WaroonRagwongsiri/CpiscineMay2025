/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 08:29:39 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 08:29:39 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;
	int	found;

	found = 0;
	i = 2;
	while (found != 1)
	{
		if (ft_is_prime(i) == 1)
		{
			if (i >= nb)
			{
				found = 1;
				return (i);
			}
		}
		i++;
	}
	return (i);
}

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
// 	printf("%d\n",ft_find_next_prime(-1));
// 	printf("%d\n",ft_find_next_prime(0));
// 	printf("%d\n",ft_find_next_prime(4));
// 	printf("%d\n",ft_find_next_prime(5));
// 	printf("%d\n",ft_find_next_prime(10));
// 	printf("%d\n",ft_find_next_prime(982));
// 	printf("%d\n",ft_find_next_prime(983));
// 	printf("%d\n",ft_find_next_prime(984));
// 	printf("%d\n",ft_find_next_prime(991));
// 	return (0);
// }

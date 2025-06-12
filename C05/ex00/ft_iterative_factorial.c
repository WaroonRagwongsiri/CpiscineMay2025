/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 06:39:33 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 06:39:33 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_iterative_factorial(-1));
// 	printf("%d\n",ft_iterative_factorial(0));
// 	printf("%d\n",ft_iterative_factorial(1));
// 	printf("%d\n",ft_iterative_factorial(2));
// 	printf("%d\n",ft_iterative_factorial(3));
// 	printf("%d\n",ft_iterative_factorial(4));
// 	printf("%d\n",ft_iterative_factorial(-6));
// 	printf("%d\n",ft_iterative_factorial(5));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 06:53:17 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 06:53:17 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else if (nb == 2)
		return (2);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_recursive_factorial(-1));
// 	printf("%d\n",ft_recursive_factorial(0));
// 	printf("%d\n",ft_recursive_factorial(1));
// 	printf("%d\n",ft_recursive_factorial(2));
// 	printf("%d\n",ft_recursive_factorial(3));
// 	printf("%d\n",ft_recursive_factorial(4));
// 	printf("%d\n",ft_recursive_factorial(5));
// 	printf("%d\n",ft_recursive_factorial(-6));
// 	return (0);
// }

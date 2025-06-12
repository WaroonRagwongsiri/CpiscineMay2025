/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 07:42:39 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 07:42:39 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else if (index == 2)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_fibonacci(-3));
// 	printf("%d\n",ft_fibonacci(-2));
// 	printf("%d\n",ft_fibonacci(-1));
// 	printf("%d\n",ft_fibonacci(-0));
// 	printf("%d\n",ft_fibonacci(0));
// 	printf("%d\n",ft_fibonacci(1));
// 	printf("%d\n",ft_fibonacci(2));
// 	printf("%d\n",ft_fibonacci(3));
// 	printf("%d\n",ft_fibonacci(4));
// 	printf("%d\n",ft_fibonacci(5));
// 	printf("%d\n",ft_fibonacci(6));
// 	printf("%d\n",ft_fibonacci(7));
// 	printf("%d\n",ft_fibonacci(8));
// 	return (0);
// }

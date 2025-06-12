/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 07:48:27 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 07:48:27 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_sqrt(-5));
// 	printf("%d\n",ft_sqrt(-4));
// 	printf("%d\n",ft_sqrt(-3));
// 	printf("%d\n",ft_sqrt(-2));
// 	printf("%d\n",ft_sqrt(-1));
// 	printf("%d\n",ft_sqrt(0));
// 	printf("%d\n",ft_sqrt(1));
// 	printf("%d\n",ft_sqrt(2));
// 	printf("%d\n",ft_sqrt(3));
// 	printf("%d\n",ft_sqrt(4));
// 	printf("%d\n",ft_sqrt(5));
// 	printf("%d\n",ft_sqrt(6));
// 	printf("%d\n",ft_sqrt(7));
// 	printf("%d\n",ft_sqrt(8));
// 	printf("%d\n",ft_sqrt(9));
// 	printf("%d\n",ft_sqrt(10));
// 	printf("%d\n",ft_sqrt(11));
// 	printf("%d\n",ft_sqrt(100 * 100));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 16:48:17 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 16:48:17 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	int	i;
// 	int	*null_test;

// 	i = 0;
// 	arr = ft_range(-9,7);
// 	while (i < 16)
// 	{
// 		printf("%d,",arr[i]);
// 		i++;
// 	}
// 	null_test = ft_range(2,1);
// 	printf("%p",null_test);
// 	free(arr);
// 	free(null_test);
// 	return (0);
// }

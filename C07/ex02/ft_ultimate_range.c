/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 18:18:59 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 18:18:59 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	min_start;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *) malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (-1);
	min_start = min;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (max - min_start);
}

// #include <stdio.h>

// int	main()
// {
// 	int	*arr;
// 	int	i;
// 	int	*null_arr;
// 	int	max;
// 	int	min;

// 	max = -10;
// 	min = -100;
// 	null_arr = 0;
// 	i = 0;
// 	printf("len = %d\n",ft_ultimate_range(&arr, min, max));
// 	while (i < max - min)
// 	{
// 		printf("%d,",arr[i]);
// 		i++;
// 	}
// 	printf("len = %d\n",ft_ultimate_range(&null_arr, 10, 2));
// 	printf("%p",null_arr);
// 	free(null_arr);
// 	free(arr);
// 	return (0);
// }

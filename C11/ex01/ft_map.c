/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 16:08:58 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 16:08:58 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

int	odd_even(int nbr)
{
	if (nbr % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr[] = {1,2,3,4};
// 	int	*sol;
// 	int	size = sizeof(arr) / sizeof(arr[0]);
// 	int	(*ptr_odd_even)(int);
// 	int	i;

// 	i = 0;
// 	ptr_odd_even = &odd_even;
// 	sol = ft_map(arr, size, ptr_odd_even);
// 	while (i < size)
// 	{
// 		printf("1: %d\n",sol[i]);
// 		i++;
// 	}
// 	free(sol);
// 	return (0);
// }

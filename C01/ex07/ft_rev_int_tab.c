/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-20 13:20:33 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-20 13:20:33 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end - 1];
		tab[end - 1] = temp;
		start++;
		end--;
	}
	return ;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int array[6] = {1,2,3,4,5,6};

// 	ft_rev_int_tab(array, 6);
// 	for(int i=0;i<6;i++)
// 	{
// 		printf("%d",array[i]);
// 	}
// 	return (0);
// }